#pragma once

#ifdef RED4EXT_STATIC_LIB
#include <RED4ext/TweakDB.hpp>
#endif

#include <cstdlib>

#include <RED4ext/Detail/AddressHashes.hpp>
#include <RED4ext/RTTISystem.hpp>
#include <RED4ext/Relocation.hpp>

RED4EXT_INLINE uintptr_t GetAddressFromInstruction(uintptr_t aRVAAddress, int32_t aAddressOffset)
{
    auto address = reinterpret_cast<uintptr_t>(GetModuleHandle(nullptr)) + aRVAAddress;
    auto offset = *reinterpret_cast<int32_t*>(address + aAddressOffset);
    return (address + aAddressOffset + 4) + offset;
}

RED4EXT_INLINE RED4ext::Handle<RED4ext::IScriptable> RED4ext::TweakDB::GetRecord(TweakDBID aDBID)
{
    RED4ext::Handle<RED4ext::IScriptable> record;
    TryGetRecord(aDBID, record);
    return std::move(record);
}

RED4EXT_INLINE bool RED4ext::TweakDB::TryGetRecord(TweakDBID aDBID, Handle<IScriptable>& aRecord)
{
    if (!aDBID.IsValid())
        return false;
    std::shared_lock<SharedSpinLock> _(mutex01);

    auto* record = recordsByID.Get(aDBID);
    if (record == nullptr)
        return false;

    aRecord = *record;
    return true;
}

RED4EXT_INLINE RED4ext::DynArray<RED4ext::Handle<RED4ext::IScriptable>> RED4ext::TweakDB::GetRecordsByType(
    CBaseRTTIType* aType)
{
    RED4ext::DynArray<RED4ext::Handle<RED4ext::IScriptable>> records;
    TryGetRecordsByType(aType, records);
    return std::move(records);
}

RED4EXT_INLINE bool RED4ext::TweakDB::TryGetRecordsByType(CBaseRTTIType* aType,
                                                          DynArray<Handle<IScriptable>>& aRecordsArray)
{
    std::shared_lock<SharedSpinLock> _(mutex01);

    auto* records = recordsByType.Get(aType);
    if (records == nullptr)
        return false;

    aRecordsArray = *records;
    return true;
}

RED4EXT_INLINE bool RED4ext::TweakDB::AddQuery(TweakDBID aDBID, const DynArray<TweakDBID>& aArray)
{
    if (!aDBID.IsValid())
    {
        return false;
    }

    std::lock_guard<SharedSpinLock> _(mutex01);
    return queries.Insert(aDBID, aArray).second;
}

RED4EXT_INLINE bool RED4ext::TweakDB::ReplaceQuery(TweakDBID aDBID, const DynArray<TweakDBID>& aArray)
{
    if (!aDBID.IsValid())
    {
        return false;
    }

    std::lock_guard<SharedSpinLock> _(mutex01);
    return queries.InsertOrAssign(aDBID, aArray).second;
}

RED4EXT_INLINE RED4ext::DynArray<RED4ext::TweakDBID> RED4ext::TweakDB::Query(TweakDBID aDBID)
{
    RED4ext::DynArray<RED4ext::TweakDBID> array;
    TryQuery(aDBID, array);
    return std::move(array);
}

RED4EXT_INLINE bool RED4ext::TweakDB::TryQuery(TweakDBID aDBID, DynArray<TweakDBID>& aArray)
{
    if (!aDBID.IsValid())
        return false;
    std::shared_lock<SharedSpinLock> _(mutex01);

    const auto* recordArray = queries.Get(aDBID);
    if (recordArray == nullptr)
        return false;

    aArray = *recordArray;
    return true;
}

RED4EXT_INLINE bool RED4ext::TweakDB::HasQuery(TweakDBID aDBID)
{
    if (!aDBID.IsValid())
    {
        return false;
    }

    std::shared_lock<SharedSpinLock> _(mutex01);
    const auto queriesArray = queries.Get(aDBID);
    return queriesArray != nullptr;
}

RED4EXT_INLINE bool RED4ext::TweakDB::AddGroupTag(TweakDBID aDBID, GroupTag aGroup)
{
    if (!aDBID.IsValid())
    {
        return false;
    }

    std::lock_guard<SharedSpinLock> _(mutex01);
    return groups.Insert(aDBID, aGroup).second;
}

RED4EXT_INLINE bool RED4ext::TweakDB::ReplaceGroupTag(TweakDBID aDBID, GroupTag aGroup)
{
    if (!aDBID.IsValid())
    {
        return false;
    }

    std::lock_guard<SharedSpinLock> _(mutex01);
    return groups.InsertOrAssign(aDBID, aGroup).second;
}

RED4EXT_INLINE bool RED4ext::TweakDB::HasGroupTag(TweakDBID aDBID)
{
    if (!aDBID.IsValid())
    {
        return false;
    }

    std::shared_lock<SharedSpinLock> _(mutex01);
    const auto group = groups.Get(aDBID);
    return group != nullptr;
}

RED4EXT_INLINE bool RED4ext::TweakDB::UpdateRecord(TweakDBID aDBID)
{
    auto* pRecordHandle = recordsByID.Get(aDBID);
    if (pRecordHandle == nullptr)
        return false;
    return UpdateRecord(reinterpret_cast<gamedataTweakDBRecord*>(pRecordHandle->GetPtr()));
}

RED4EXT_INLINE bool RED4ext::TweakDB::UpdateRecord(gamedataTweakDBRecord* aRecord)
{
    // Calling RTTI->Init doesn't always get the flat values for the record.
    // We're forced to call the function that's creating records in TweakDB.
    // Meaning we have to pass our own TweakDB class. sorry -Sombra

    using CreateTDBRecord_t = void (*)(TweakDB*, uint32_t aBaseMurmur3, TweakDBID aDBID);
    static UniversalRelocFunc<CreateTDBRecord_t> CreateTDBRecord(Detail::AddressHashes::TweakDB_CreateRecord);

    TweakDB fakeTweakDB;
    struct FakeAllocator : Memory::IAllocator
    {
        virtual Memory::AllocationResult Alloc(uint64_t aSize) const override
        {
            return AllocAligned(aSize, 8);
        }

        virtual Memory::AllocationResult AllocAligned(uint64_t aSize, uint32_t aAlignment) const override
        {
            Memory::AllocationResult result;
            result.memory = _aligned_malloc(aSize, aAlignment);
            result.size = aSize;
            return result;
        }

        virtual Memory::AllocationResult Realloc(Memory::AllocationResult& aAllocation, uint64_t aSize) const override
        {
            RED4EXT_UNUSED_PARAMETER(aAllocation);
            RED4EXT_UNUSED_PARAMETER(aSize);

            return {};
        }

        virtual Memory::AllocationResult ReallocAligned(Memory::AllocationResult& aAllocation, uint64_t aSize,
                                                        uint32_t aAlignment) const override
        {
            RED4EXT_UNUSED_PARAMETER(aAllocation);
            RED4EXT_UNUSED_PARAMETER(aSize);
            RED4EXT_UNUSED_PARAMETER(aAlignment);

            return {};
        }

        virtual void Free(Memory::AllocationResult& aAllocation) const override
        {
            _aligned_free(aAllocation.memory);
        }

        virtual void sub_28(void* aMemory) const override
        {
            RED4EXT_UNUSED_PARAMETER(aMemory);
        }

        virtual const uint32_t GetHandle() const override
        {
            return 0;
        }
    };
    static FakeAllocator fakeAllocator;

    // we only need recordsByID and recordsByType
    fakeTweakDB.recordsByID = {&fakeAllocator};
    fakeTweakDB.recordsByType = {&fakeAllocator};

    CreateTDBRecord(&fakeTweakDB, aRecord->GetTweakBaseHash(), aRecord->recordID);

    bool updated = false;
    if (fakeTweakDB.recordsByID.size != 0)
    {
        auto newRecord = fakeTweakDB.recordsByType.Get(aRecord->GetNativeType())->Begin()->instance;
        aRecord->GetNativeType()->Assign(aRecord, newRecord);
        updated = true;
    }

    return updated;
}

RED4EXT_INLINE bool RED4ext::TweakDB::CreateRecord(TweakDBID aDBID, CBaseRTTIType* aType)
{
    Handle<IScriptable> record;
    {
        std::shared_lock<SharedSpinLock> _(mutex01);

        const auto* records = recordsByType.Get(aType);
        if (records == nullptr || records->size == 0)
            return false;

        record = (*records)[0];
    }

    const auto* tweakRecord = reinterpret_cast<gamedataTweakDBRecord*>(record.GetPtr());
    return CreateRecord(aDBID, tweakRecord->GetTweakBaseHash());
}

RED4EXT_INLINE bool RED4ext::TweakDB::CreateRecord(TweakDBID aDBID, uint32_t aTweakBaseHash)
{
    using CreateTDBRecord_t = void (*)(TweakDB*, uint32_t aBaseMurmur3, TweakDBID aDBID);
    static UniversalRelocFunc<CreateTDBRecord_t> CreateTDBRecord(Detail::AddressHashes::TweakDB_CreateRecord);

    if (!aDBID.IsValid())
        return false;

    if (GetRecord(aDBID))
        return false; // Already exists

    // This will read all the flats based on 'base'
    CreateTDBRecord(this, aTweakBaseHash, aDBID);

    return true; // Assume all went well
}

RED4EXT_INLINE bool RED4ext::TweakDB::RemoveRecord(TweakDBID aDBID)
{
    Handle<IScriptable> record = GetRecord(aDBID);
    if (!record)
        return false;

    std::lock_guard<SharedSpinLock> _(mutex01);
    if (recordsByID.Remove(aDBID))
    {
        auto* records = recordsByType.Get(record->GetNativeType());
        return records->Remove(record);
    }

    return false;
}

RED4EXT_INLINE bool RED4ext::TweakDB::AddFlat(TweakDBID aDBID)
{
    std::lock_guard<SharedSpinLock> _(mutex00);

    return flats.Insert(aDBID).second;
}

RED4EXT_INLINE bool RED4ext::TweakDB::AddFlats(const SortedUniqueArray<TweakDBID>& aDBIDs)
{
    std::lock_guard<SharedSpinLock> _(mutex00);

    return flats.Insert(aDBIDs) > 0;
}

RED4EXT_INLINE bool RED4ext::TweakDB::RemoveFlat(TweakDBID aDBID)
{
    std::lock_guard<SharedSpinLock> _(mutex00);

    return flats.Remove(aDBID);
}

RED4EXT_INLINE RED4ext::TweakDB::FlatValue* RED4ext::TweakDB::GetFlatValue(TweakDBID aDBID)
{
    if (!aDBID.IsValid())
        return nullptr;
    std::shared_lock<SharedSpinLock> _(mutex00);

    if (!aDBID.HasTDBOffset())
    {
        const auto it = flats.Find(aDBID);
        return it == flats.end() ? nullptr : reinterpret_cast<FlatValue*>(flatDataBuffer + it->ToTDBOffset());
    }
    return reinterpret_cast<FlatValue*>(flatDataBuffer + aDBID.ToTDBOffset());
}

RED4EXT_INLINE int32_t RED4ext::TweakDB::CreateFlatValue(const CStackType& aStackType)
{
    uintptr_t flatAlignment = aStackType.type->GetAlignment();
    if (flatAlignment < 8)
    {
        flatAlignment = 8;
    }

    uintptr_t flatValueSize = RED4ext::AlignUp(8ull /* vftable */ + aStackType.type->GetSize(), flatAlignment);
    uintptr_t flatDataBufferEnd_Aligned = RED4ext::AlignUp(flatDataBufferEnd, flatAlignment);

    {
        std::lock_guard<SharedSpinLock> _(mutex00);

        if (flatDataBufferEnd_Aligned + flatValueSize > flatDataBuffer + flatDataBufferCapacity)
        {
            Memory::GMPL_TDB_DataAllocator allocator;

            // max possible size
            if (flatDataBufferCapacity == 0x00FFFFFF)
                return -1;

            uint32_t currentSize = static_cast<uint32_t>(flatDataBufferEnd - flatDataBuffer);
            uint32_t newCapacity = flatDataBufferCapacity + (1000 * (8 + sizeof(DynArray<int>)));
            if (newCapacity > 0x00FFFFFF)
            {
                newCapacity = 0x00FFFFFF;
                if (flatDataBufferEnd_Aligned + flatValueSize > (flatDataBuffer + newCapacity))
                {
                    // If it won't be enough
                    return -1;
                }
            }

            auto result = allocator.AllocAligned(newCapacity, 8);
            if (result.memory == nullptr)
                return -1;
            else if (result.size > 0x00FFFFFF)
                result.size = 0x00FFFFFF;

            auto* oldFlatDataBuffer = reinterpret_cast<void*>(flatDataBuffer);
            memcpy(result.memory, oldFlatDataBuffer, currentSize);
            SetFlatDataBuffer(result.memory, currentSize, static_cast<uint32_t>(result.size));
            flatDataBufferEnd_Aligned = (7 + flatDataBufferEnd) & ~7;

            // Race condition when freeing old buffer
            // Undefined behavior if the game is in the process of dereferencing the buffer
            // Mutex locking is useless. Game accesses the buffer via a static pointer
            // pRTTIAllocator->Free(oldFlatDataBuffer);

            // Delay freeing. Consumes more memory but less risky
            static void* lastFlatDataBuffer = nullptr;
            if (lastFlatDataBuffer != nullptr)
                allocator.Free(lastFlatDataBuffer);
            lastFlatDataBuffer = oldFlatDataBuffer;
        }

        if (AllocateFlatValue(reinterpret_cast<void*>(flatDataBufferEnd_Aligned), aStackType))
        {
            flatDataBufferEnd = flatDataBufferEnd_Aligned + flatValueSize;
            return reinterpret_cast<FlatValue*>(flatDataBufferEnd_Aligned)->ToTDBOffset();
        }

        return -1;
    }
}

RED4EXT_INLINE bool RED4ext::TweakDB::AllocateFlatValue(void* aBuffer, const CStackType& aStackType)
{
#define RED4EXT_TDB_FLAT_CASE(N, T)                                                                                    \
    case CName(N):                                                                                                     \
    {                                                                                                                  \
        new (aBuffer) FlatValueImpl<T, CName(N)>(std::forward<T>(*reinterpret_cast<T*>(aStackType.value)));            \
        return true;                                                                                                   \
    }                                                                                                                  \
    case CName("array:" N):                                                                                            \
    {                                                                                                                  \
        using Array_t = DynArray<T>;                                                                                   \
        new (aBuffer) FlatValueImpl<Array_t, CName("array:" N)>(                                                       \
            std::forward<Array_t>(*reinterpret_cast<Array_t*>(aStackType.value)));                                     \
        return true;                                                                                                   \
    }

    switch (aStackType.type->GetName())
    {
        RED4EXT_TDB_FLAT_CASE("TweakDBID", TweakDBID);
        RED4EXT_TDB_FLAT_CASE("Quaternion", Quaternion);
        RED4EXT_TDB_FLAT_CASE("EulerAngles", EulerAngles);
        RED4EXT_TDB_FLAT_CASE("Vector3", Vector3);
        RED4EXT_TDB_FLAT_CASE("Vector2", Vector2);
        RED4EXT_TDB_FLAT_CASE("Color", Color);
        RED4EXT_TDB_FLAT_CASE("gamedataLocKeyWrapper", gamedataLocKeyWrapper);
        RED4EXT_TDB_FLAT_CASE("raRef:CResource", ResourceAsyncReference<CResource>);
        RED4EXT_TDB_FLAT_CASE("CName", CName);
        RED4EXT_TDB_FLAT_CASE("Bool", bool);
        RED4EXT_TDB_FLAT_CASE("String", CString);
        RED4EXT_TDB_FLAT_CASE("Float", float);
        RED4EXT_TDB_FLAT_CASE("Int32", int32_t);
    }

    return false;
}

RED4EXT_INLINE void RED4ext::TweakDB::SetFlatDataBuffer(void* aBuffer, uint32_t aSize, uint32_t aCapacity)
{
    uintptr_t oldFlatDataBuffer = flatDataBuffer;
    flatDataBuffer = reinterpret_cast<uintptr_t>(aBuffer);
    flatDataBufferEnd = flatDataBuffer + aSize;
    flatDataBufferCapacity = aCapacity;
    staticFlatDataBuffer = flatDataBuffer;

    // assumes mutex00 is locked
    // TweakDB was not meant to be modified at runtime
    // defaultValues entries will have invalid tdbOffset if flatDataBuffer is changed
    // hacky fix:
    defaultValues.ForEach(
        [this, oldFlatDataBuffer](const RED4ext::CName, RED4ext::TweakDB::FlatValue*& defaultFlatValue)
        {
            int32_t offset = static_cast<int32_t>(reinterpret_cast<uintptr_t>(defaultFlatValue) - oldFlatDataBuffer);
            defaultFlatValue = reinterpret_cast<RED4ext::TweakDB::FlatValue*>(flatDataBuffer + offset);
        });
}

RED4EXT_INLINE const RED4ext::TweakDB::FlatValue* RED4ext::TweakDB::GetDefaultFlatValue(CName aTypeName)
{
    std::shared_lock<SharedSpinLock> _(mutex00);

    FlatValue** flatValue = defaultValues.Get(aTypeName);
    return flatValue ? *flatValue : nullptr;
}

RED4EXT_INLINE RED4ext::TweakDB* RED4ext::TweakDB::Get()
{
    using Get_t = TweakDB* (*)();
    static UniversalRelocFunc<Get_t> func(Detail::AddressHashes::TweakDB_Get);
    return func();
}

RED4EXT_INLINE int32_t RED4ext::TweakDB::FlatValue::ToTDBOffset() const
{
    return static_cast<int32_t>((uintptr_t)this - TweakDB::Get()->flatDataBuffer);
}
