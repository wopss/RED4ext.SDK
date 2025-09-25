#pragma once

#include <cstdint>
#include <shared_mutex>

#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/HashMap.hpp>
#include <RED4ext/Map.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/RTTISystem.hpp>
#include <RED4ext/RTTITypes.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>
#include <RED4ext/Scripting/Natives/Generated/Color.hpp>
#include <RED4ext/Scripting/Natives/Generated/EulerAngles.hpp>
#include <RED4ext/Scripting/Natives/Generated/Quaternion.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector2.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>
#include <RED4ext/Scripting/Natives/gamedataTweakDBRecord.hpp>
#include <RED4ext/Scripting/Stack.hpp>
#include <RED4ext/SharedSpinLock.hpp>
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

struct TweakDB
{
    static constexpr uint32_t MaxFlatDataBufferSize = 0x00FFFFFF;

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
        virtual ~FlatValue() = default;

        // GetValueOffset sets 3 bytes offset to the data
        // Those **ARE NOT** TweakDBID::tdbOffsetBE that point to this class and not the date

#define RED4EXT_TDB_FLAT_VALUE_GETTER(N)                                                                               \
    virtual bool GetValueOffset_array_##N(TweakDBID* aFlat) const = 0;                                                 \
    virtual bool GetValueOffset_##N(TweakDBID* aFlat) const = 0;

        RED4EXT_TDB_FLAT_VALUE_GETTER(TweakDBID);
        RED4EXT_TDB_FLAT_VALUE_GETTER(Quaternion);
        RED4EXT_TDB_FLAT_VALUE_GETTER(EulerAngles);
        RED4EXT_TDB_FLAT_VALUE_GETTER(Vector3);
        RED4EXT_TDB_FLAT_VALUE_GETTER(Vector2);
        RED4EXT_TDB_FLAT_VALUE_GETTER(Color);
        RED4EXT_TDB_FLAT_VALUE_GETTER(gamedataLocKeyWrapper);
        RED4EXT_TDB_FLAT_VALUE_GETTER(raRefCResource);
        RED4EXT_TDB_FLAT_VALUE_GETTER(CName);
        RED4EXT_TDB_FLAT_VALUE_GETTER(Bool);
        RED4EXT_TDB_FLAT_VALUE_GETTER(String);
        RED4EXT_TDB_FLAT_VALUE_GETTER(Float);
        RED4EXT_TDB_FLAT_VALUE_GETTER(Int32);

        virtual CStackType GetValue() = 0;
        virtual CName* GetTypeName(CName* aName) = 0;
        virtual void* GetDataPtr() = 0;

        template<typename T>
        T* GetValue()
        {
            return reinterpret_cast<T*>(GetValue().value);
        }

        int32_t ToTDBOffset() const;
    };

    template<typename T, auto N>
    struct FlatValueImpl : FlatValue
    {
        explicit FlatValueImpl(T&& aData)
            : data(std::forward<T>(aData))
        {
        }

#define RED4EXT_TDB_FLAT_VALUE_IMPL(N)                                                                                 \
    bool GetValueOffset_array_##N(TweakDBID* aFlat) const override                                                     \
    {                                                                                                                  \
        aFlat->SetTDBOffset(ToTDBOffset() + offsetof(FlatValueImpl, data));                                            \
        return true;                                                                                                   \
    }                                                                                                                  \
    bool GetValueOffset_##N(TweakDBID* aFlat) const override                                                           \
    {                                                                                                                  \
        aFlat->SetTDBOffset(ToTDBOffset() + offsetof(FlatValueImpl, data));                                            \
        return true;                                                                                                   \
    }

        RED4EXT_TDB_FLAT_VALUE_IMPL(TweakDBID);
        RED4EXT_TDB_FLAT_VALUE_IMPL(Quaternion);
        RED4EXT_TDB_FLAT_VALUE_IMPL(EulerAngles);
        RED4EXT_TDB_FLAT_VALUE_IMPL(Vector3);
        RED4EXT_TDB_FLAT_VALUE_IMPL(Vector2);
        RED4EXT_TDB_FLAT_VALUE_IMPL(Color);
        RED4EXT_TDB_FLAT_VALUE_IMPL(gamedataLocKeyWrapper);
        RED4EXT_TDB_FLAT_VALUE_IMPL(raRefCResource);
        RED4EXT_TDB_FLAT_VALUE_IMPL(CName);
        RED4EXT_TDB_FLAT_VALUE_IMPL(Bool);
        RED4EXT_TDB_FLAT_VALUE_IMPL(String);
        RED4EXT_TDB_FLAT_VALUE_IMPL(Float);
        RED4EXT_TDB_FLAT_VALUE_IMPL(Int32);

        CStackType GetValue() override
        {
            return {CRTTISystem::Get()->GetType(N), &data};
        }

        virtual CName* GetTypeName(CName* aName) override
        {
            *aName = N;
            return aName;
        }

        virtual void* GetDataPtr() override
        {
            return &data;
        }

#pragma warning(suppress : 4324)
        T data;
    };
    using QuaternionFlatValue = FlatValueImpl<Quaternion, CName("Quaternion")>;
    RED4EXT_ASSERT_OFFSET(QuaternionFlatValue, data, 0x10);
    RED4EXT_ASSERT_SIZE(QuaternionFlatValue, 0x20);

    uintptr_t staticFlatDataBuffer; // 00 - same as flatDataBuffer, used for direct access
    uint64_t unk08;                 // 08
    void* unkF0;                    // F0
    void* unkF8;                    // F8
    SharedSpinLock mutex00;         // 20 - used with flats, flatDataBuffer* and defaultValues
    SharedSpinLock mutex01;         // 21 - used with recordsByID, recordsByType, queries and groups
    void* unk28;                    // 28 - class - 344 bytes - has DynArray<GroupTagCName> and DynArray<TagVal-1byte>
    void* unk30;                    // 30 - class - 248 bytes
    bool unk38;                     // 38
    SortedUniqueArray<TweakDBID> flats;                                   // 40
    HashMap<TweakDBID, Handle<IScriptable>> recordsByID;                  // 58
    HashMap<CBaseRTTIType*, DynArray<Handle<IScriptable>>> recordsByType; // 88
    Map<TweakDBID, DynArray<TweakDBID>> queries;                          // B8
    Map<TweakDBID, GroupTag> groups;                                      // E0
    HashMap<CName, FlatValue*> defaultValues;                             // 108
    DynArray<CString> unk138;                                             // 138 - empty - maybe not CString
    uintptr_t flatDataBuffer;                                             // 148
    uint32_t flatDataBufferCapacity;                                      // 150
    uintptr_t flatDataBufferEnd;                                          // 158
    uint8_t unk160;                                                       // 160
    uint32_t unk164;                                                      // 164

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
        std::shared_lock<SharedSpinLock> _(mutex00);

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
    bool AddFlats(const SortedUniqueArray<TweakDBID>& aDBIDs);
    bool RemoveFlat(TweakDBID aDBID);

    // Multithreads may lead to undefined behavior
    FlatValue* GetFlatValue(TweakDBID aDBID);
    // returns -1 on error, tdbOffset on success
    int32_t CreateFlatValue(const CStackType& aStackType);

    // Default values are lazily-created.
    // This will return null if the game never needed the default value
    const FlatValue* GetDefaultFlatValue(CName aTypeName);

    void UpsizeFlatDataBufferToMax();

    static TweakDB* Get();

private:
    // Multithreads may lead to undefined behavior
    void SetFlatDataBuffer(void* aBuffer, uint32_t aSize, uint32_t aCapacity);
    bool AllocateFlatValue(void* aBuffer, const CStackType& aStackType);
    void UpsizeFlatDataBuffer(uint32_t aCapacity);
};
RED4EXT_ASSERT_OFFSET(TweakDB, mutex00, 0x20);
RED4EXT_ASSERT_OFFSET(TweakDB, flats, 0x40);
RED4EXT_ASSERT_OFFSET(TweakDB, flatDataBuffer, 0x148);
RED4EXT_ASSERT_OFFSET(TweakDB, unk160, 0x160);
RED4EXT_ASSERT_SIZE(TweakDB, 0x168);
} // namespace RED4ext

#ifdef RED4EXT_HEADER_ONLY
#include <RED4ext/TweakDB-inl.hpp>
#endif
