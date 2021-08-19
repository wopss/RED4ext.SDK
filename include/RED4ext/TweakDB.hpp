#pragma once

#include <cstdint>
#include <shared_mutex>

#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/HashMap.hpp>
#include <RED4ext/Map.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/RTTITypes.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>
#include <RED4ext/Scripting/Stack.hpp>
#include <RED4ext/SharedMutex.hpp>
#include <RED4ext/SortedArray.hpp>

namespace RED4ext
{
// Issues with current API:
// 1. Reading from multiple threads is fine. Creating a new FlatValue is not. (writing to flatDataBuffer)
//    Every FlatValue* (and GetValue) will be invalid if a thread grows the flatDataBuffer.
//    Except if you don't free the old buffer, but that's an issue on its own
//    Currently, freeing the buffer is delayed to avoid this issue
//
// 2. Flat values are pooled.
//    An int (or any type) value of '1' exist only once in TweakDB::flatDataBuffer. Modifying it will affect all records
//    Implementing a value pool here is pointless. the lib isn't a shared library. Pool won't be shared between dlls
//    Could abuse the alignment gaps in TweakDB to store custom data in the class.. like a pointer to the pool? >_>

struct gamedataTweakDBRecord : IScriptable
{
    virtual void sub_110() = 0;
    virtual uint32_t GetTweakBaseHash() const = 0; // Murmur3

    TweakDBID recordID;
};

struct TweakDB
{
    enum class GroupTag : int8_t
    {
        None = 0,
        Abstract = 1 << 0,
        NotQueryable = 1 << 1,
        CPO = 1 << 2,
        Debug = 1 << 3
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
        virtual CStackType GetValue() const = 0;

        template<typename T>
        T* GetValue() const
        {
            return reinterpret_cast<T*>(GetValue().value);
        }

        // [Warning] FlatValues are pooled.
        bool SetValue(const CStackType& aStackType);

        // [Warning] FlatValues are pooled.
        void SetValue(ScriptInstance aValue);

        int32_t ToTDBOffset() const;

        // value here
    };

    SharedMutex mutex00; // 00 - used with flats, flatDataBuffer* and defaultValues
    SharedMutex mutex01; // 01 - used with recordsByID, recordsByType, queries and groups
    void* unk08;         // 08 - class - 264 bytes - has DynArray<GroupTagCName> and DynArray<TagVal-1byte>
    void* unk10;         // 10 - class - 208 bytes
    bool unk18;          // 18
    SortedUniqueArray<TweakDBID> flats;                                   // 20
    HashMap<TweakDBID, Handle<IScriptable>> recordsByID;                  // 38
    HashMap<CBaseRTTIType*, DynArray<Handle<IScriptable>>> recordsByType; // 68
    Map<TweakDBID, DynArray<TweakDBID>> queries;                          // 98
    Map<TweakDBID, GroupTag> groups;                                      // C0
    HashMap<CName, FlatValue*> defaultValues;                             // E8
    DynArray<CString> unk118;                                             // 118 - empty - maybe not CString
    uintptr_t flatDataBuffer;                                             // 128
    uint32_t flatDataBufferCapacity;                                      // 130
    uintptr_t flatDataBufferEnd;                                          // 138

    template<typename T>
    T GetValue(TweakDBID aDBID)
    {
        T value{};
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

    DynArray<Handle<IScriptable>> GetRecordsByType(CBaseRTTIType* aType);
    bool TryGetRecordsByType(CBaseRTTIType* aType, DynArray<Handle<IScriptable>>& aRecordsArray);

    bool AddQuery(TweakDBID aDBID, const DynArray<TweakDBID>& aArray);
    bool ReplaceQuery(TweakDBID aDBID, const DynArray<TweakDBID>& aArray);

    DynArray<TweakDBID> Query(TweakDBID aDBID);
    bool TryQuery(TweakDBID aDBID, DynArray<TweakDBID>& aArray);
    bool HasQuery(TweakDBID aDBID);

    bool AddGroupTag(TweakDBID aDBID, GroupTag aGroup);
    bool ReplaceGroupTag(TweakDBID aDBID, GroupTag aGroup);
    bool HasGroupTag(TweakDBID aDBID);

    // Updates all the value offsets inside the record
    bool UpdateRecord(TweakDBID aDBID);
    // Updates all the value offsets inside the record
    bool UpdateRecord(gamedataTweakDBRecord* aRecord);

    bool CreateRecord(TweakDBID aDBID, CBaseRTTIType* aType);
    bool CreateRecord(TweakDBID aDBID, uint32_t aTweakBaseHash);
    bool RemoveRecord(TweakDBID aDBID);

    // TweakDBID must include tdbOffset
    bool AddFlat(TweakDBID aDBID);
    bool RemoveFlat(TweakDBID aDBID);

    // Multithreads may lead to undefined behavior
    FlatValue* GetFlatValue(TweakDBID aDBID);
    // returns -1 on error, tdbOffset on success
    int32_t CreateFlatValue(const CStackType& aStackType);

    // Default values are lazily-created.
    // This will return null if the game never needed the default value
    const FlatValue* GetDefaultFlatValue(CName aTypeName);

    static TweakDB* Get();

private:
    // Multithreads may lead to undefined behavior
    void SetFlatDataBuffer(void* aBuffer, uint32_t aSize, uint32_t aCapacity);
};
RED4EXT_ASSERT_OFFSET(TweakDB, mutex01, 0x01);
RED4EXT_ASSERT_OFFSET(TweakDB, unk08, 0x08);
RED4EXT_ASSERT_OFFSET(TweakDB, flats, 0x20);
RED4EXT_ASSERT_OFFSET(TweakDB, flatDataBufferEnd, 0x138);
RED4EXT_ASSERT_SIZE(TweakDB, 0x140);
} // namespace RED4ext

#ifdef RED4EXT_HEADER_ONLY
#include <RED4ext/TweakDB-inl.hpp>
#endif
