#pragma once
#include <cstdint>
#include <shared_mutex>

#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/HashMap.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Types/SharedMutex.hpp>
#include <RED4ext/Types/SimpleTypes.hpp>
#include <RED4ext/RTTITypes.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>
#include <RED4ext/Scripting/Stack.hpp>

namespace RED4ext
{
// Issues with current API:
// 1. Reading from multiple threads is fine. Creating a new FlatValue is not. (writing to flatDataBuffer)
//    Every FlatValue* (and GetValue) will be invalid if a thread grows the flatDataBuffer.
//    Except if you don't free the old buffer, but that's an issue on its own
//
// 2. Flat values are pooled.
//    An int (or any type) value of '1' exist only once in TweakDB::flatDataBuffer. Modifying it will affect all records using it.
//    Implementing a value pool in here is pointless. the lib isn't a shared library. Pool won't be shared between multiple dlls that use the SDK
//    Could abuse the alignment gaps in TweakDB to store custom data in the class.. like a pointer to the pool? >_>

struct TweakDB
{
    enum class GroupTag : int8_t
    {
        None            = 0,
        Abstract        = 1 << 0,
        NotQueryable    = 1 << 1,
        CPO             = 1 << 2,
        Debug           = 1 << 3
    };

    struct FlatValue
    {
        // ToValueOffset here is the 3bytes stored in records.
        // those 3 bytes **ARE NOT** TweakDBID::Offset. tweak's offset point to this class and not the value.

        virtual ~FlatValue() = 0;
        virtual bool ToValueOffset_array_TweakDBID(uint32_t* aValueOffset) const = 0;
        virtual bool ToValueOffset_TweakDBID(uint32_t* aValueOffset) const = 0;
        virtual bool ToValueOffset_array_Quaternion(uint32_t* aValueOffset) const = 0;
        virtual bool ToValueOffset_Quaternion(uint32_t* aValueOffset) const = 0;
        virtual bool ToValueOffset_array_EulerAngles(uint32_t* aValueOffset) const = 0;
        virtual bool ToValueOffset_EulerAngles(uint32_t* aValueOffset) const = 0;
        virtual bool ToValueOffset_array_Vector3(uint32_t* aValueOffset) const = 0;
        virtual bool ToValueOffset_Vector3(uint32_t* aValueOffset) const = 0;
        virtual bool ToValueOffset_array_Vector2(uint32_t* aValueOffset) const = 0;
        virtual bool ToValueOffset_Vector2(uint32_t* aValueOffset) const = 0;
        virtual bool ToValueOffset_array_Color(uint32_t* aValueOffset) const = 0;
        virtual bool ToValueOffset_Color(uint32_t* aValueOffset) const = 0;
        virtual bool ToValueOffset_array_gamedataLocKeyWrapper(uint32_t* aValueOffset) const = 0;
        virtual bool ToValueOffset_gamedataLocKeyWrapper(uint32_t* aValueOffset) const = 0;
        virtual bool ToValueOffset_array_raRef_CResource(uint32_t* aValueOffset) const = 0;
        virtual bool ToValueOffset_raRef_CResource(uint32_t* aValueOffset) const = 0;
        virtual bool ToValueOffset_array_CName(uint32_t* aValueOffset) const = 0;
        virtual bool ToValueOffset_CName(uint32_t* aValueOffset) const = 0;
        virtual bool ToValueOffset_array_Bool(uint32_t* aValueOffset) const = 0;
        virtual bool ToValueOffset_Bool(uint32_t* aValueOffset) const = 0;
        virtual bool ToValueOffset_array_String(uint32_t* aValueOffset) const = 0;
        virtual bool ToValueOffset_String(uint32_t* aValueOffset) const = 0;
        virtual bool ToValueOffset_array_Float(uint32_t* aValueOffset) const = 0;
        virtual bool ToValueOffset_Float(uint32_t* aValueOffset) const = 0;
        virtual bool ToValueOffset_array_Int32(uint32_t* aValueOffset) const = 0;
        virtual bool ToValueOffset_Int32(uint32_t* aValueOffset) const = 0;
        virtual CStackType* GetValue(CStackType* aStackType) const = 0;

        template<typename T>
        T* GetValue() const
        {
            CStackType stackType;
            GetValue(&stackType);
            return reinterpret_cast<T*>(stackType.value);
        }

        // [Warning] FlatValues are pooled.
        bool SetValue(CStackType& aStackType);

        // [Warning] FlatValues are pooled.
        void SetValue(void* aValue);

        int32_t ToTDBOffset() const;

        // value here
    };

    SharedMutex mutex00;                                                    // 00 - used with flats and flatDataBuffer*
    SharedMutex mutex01;                                                    // 01 - used with recordsByID, recordsByType, queryIDs, queryValues, groupIDs and groupTags
    void* unk08;                                                            // 08 - class - 264 bytes - has DynArray<GroupTagCName> and DynArray<TagVal-1byte>
    void* unk10;                                                            // 10 - class - 208 bytes
    bool unk18;                                                             // 18
    DynArray<TweakDBID> flats;                                              // 20
    uint64_t unk30;                                                         // 30
    HashMap<TweakDBID, Handle<IScriptable>> recordsByID;                    // 38
    HashMap<IRTTIType*, DynArray<Handle<IScriptable>>> recordsByType;       // 68
    DynArray<TweakDBID> queryIDs;                                           // 98
    DynArray<DynArray<TweakDBID>> queryValues;                              // A8
    uint32_t unkB8;                                                         // B8
    uint32_t unkBC;                                                         // BC
    DynArray<TweakDBID> groupIDs;                                           // C0
    DynArray<GroupTag> groupTags;                                           // D0
    uint64_t unkE0;                                                         // E0
    HashMap<CName, FlatValue*> defaultValueByType;                          // E8
    DynArray<CString> unk118;                                               // 118 - empty - maybe not CString
    uintptr_t flatDataBuffer;                                               // 128
    uint32_t flatDataBufferSize;                                            // 130
    uintptr_t flatDataBufferEnd;                                            // 138

    template<typename T>
    T GetValue(TweakDBID aDBID)
    {
        T value {};
        TryGetValue(aDBID, value);
        return std::move(value);
    }

    template<typename T>
    bool TryGetValue(TweakDBID aDBID, T& aValue)
    {
        std::shared_lock<SharedMutex> _(mutex00);

        auto* flatValue = GetFlatValue(aDBID);
        if (flatValue == nullptr)
            return false;

        aValue = *flatValue->GetValue<T>();
        return true;
    }

    Handle<IScriptable> GetRecord(TweakDBID aDBID);
    bool TryGetRecord(TweakDBID aDBID, Handle<IScriptable>& aRecord);

    DynArray<Handle<IScriptable>> GetRecordsByType(IRTTIType* aType);
    bool TryGetRecordsByType(IRTTIType* aType, DynArray<Handle<IScriptable>>& aRecordsArray);

    DynArray<TweakDBID> Query(TweakDBID aDBID);
    bool TryQuery(TweakDBID aDBID, DynArray<TweakDBID>& aArray);

    // Multithreads may lead to undefined behavior
    FlatValue* GetFlatValue(TweakDBID aDBID);
    // Multithreads may lead to undefined behavior
    FlatValue* CreateFlatValue(IRTTIType* aType);
    // Multithreads may lead to undefined behavior
    void SetFlatDataBuffer(uintptr_t start, uint32_t size);
    // Multithreads may lead to undefined behavior
    void SetFlatDataBuffer(uintptr_t start, uintptr_t end, uint32_t size);

    static TweakDB* Get();
};
RED4EXT_ASSERT_OFFSET(TweakDB, mutex01, 0x01);
RED4EXT_ASSERT_OFFSET(TweakDB, unk08, 0x08);
RED4EXT_ASSERT_OFFSET(TweakDB, flats, 0x20);
RED4EXT_ASSERT_OFFSET(TweakDB, flatDataBufferEnd, 0x138);
RED4EXT_ASSERT_SIZE(TweakDB, 0x140);
}

#ifdef RED4EXT_HEADER_ONLY
#include <RED4ext/Types/TweakDB-inl.hpp>
#endif
