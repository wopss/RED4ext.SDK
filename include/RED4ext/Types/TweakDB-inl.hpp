#pragma once
#include <shared_mutex>

#ifdef RED4EXT_STATIC_LIB
#include <RED4ext/Types/TweakDB.hpp>
#endif

#include <RED4ext/Addresses.hpp>
#include <RED4ext/REDptr.hpp>

RED4EXT_INLINE RED4ext::Handle<RED4ext::IScriptable> RED4ext::TweakDB::GetRecord(TweakDBID aDBID)
{
    RED4ext::Handle<RED4ext::IScriptable> record;
    TryGetRecord(aDBID, record);
    return std::move(record);
}

RED4EXT_INLINE bool RED4ext::TweakDB::TryGetRecord(TweakDBID aDBID, Handle<IScriptable>& aRecord)
{
    if (!aDBID.IsValid()) return false;
    std::shared_lock<SharedMutex> _(mutex01);

    auto* record = recordsByID.Get(aDBID);
    if (record == nullptr)
        return false;

    aRecord = *record;
    return true;
}

RED4EXT_INLINE RED4ext::DynArray<RED4ext::Handle<RED4ext::IScriptable>> RED4ext::TweakDB::GetRecordsByType(IRTTIType* aType)
{
    RED4ext::DynArray<RED4ext::Handle<RED4ext::IScriptable>> records;
    TryGetRecordsByType(aType, records);
    return std::move(records);
}

RED4EXT_INLINE bool RED4ext::TweakDB::TryGetRecordsByType(IRTTIType* aType, DynArray<Handle<IScriptable>>& aRecordsArray)
{
    std::shared_lock<SharedMutex> _(mutex01);

    auto* records = recordsByType.Get(aType);
    if (records == nullptr)
        return false;

    aRecordsArray = *records;
    return true;
}

RED4EXT_INLINE RED4ext::DynArray<RED4ext::TweakDBID> RED4ext::TweakDB::Query(TweakDBID aDBID)
{
    RED4ext::DynArray<RED4ext::TweakDBID> array;
    TryQuery(aDBID, array);
    return std::move(array);
}

RED4EXT_INLINE bool RED4ext::TweakDB::TryQuery(TweakDBID aDBID, DynArray<TweakDBID>& aArray)
{
    if (!aDBID.IsValid()) return false;
    std::shared_lock<SharedMutex> _(mutex01);

    for (uint32_t i = 0; i != queryIDs.size; ++i)
    {
        if (queryIDs[i] == aDBID)
        {
            aArray = queryValues[i];
            return true;
        }
    }

    return false;
}

RED4EXT_INLINE RED4ext::TweakDB::FlatValue* RED4ext::TweakDB::GetFlatValue(TweakDBID aDBID)
{
    if (!aDBID.IsValid()) return nullptr;
    std::shared_lock<SharedMutex> _(mutex00);

    if (aDBID.tdbOffset[0] == 0 && aDBID.tdbOffset[1] == 0 && aDBID.tdbOffset[2] == 0)
    {
        const auto it = std::find(flats.begin(), flats.end(), aDBID);
        return it == flats.end() ? nullptr : reinterpret_cast<FlatValue*>(flatDataBuffer + it->ToTDBOffset());
    }
    return reinterpret_cast<FlatValue*>(flatDataBuffer + aDBID.ToTDBOffset());
}

RED4EXT_INLINE RED4ext::TweakDB* RED4ext::TweakDB::Get()
{
    using Get_t = TweakDB* (*)();
    static REDfunc<Get_t> func(Addresses::TweakDB_Get);
    return func();
}

RED4EXT_INLINE bool RED4ext::TweakDB::FlatValue::SetValue(RED4ext::CStackType& aStackType)
{
    CStackType stackType;
    GetValue(&stackType);
    if (aStackType.type != nullptr)
    {
        if (aStackType.type != stackType.type)
            return false;
    }
    // might lead to race conditions.
    // doing mutex locking here is useless. game accesses "stackType.value" directly by offset into TweakDB::valuesBuffer
    stackType.type->Assign(stackType.value, aStackType.value);
    return true;
}

RED4EXT_INLINE void RED4ext::TweakDB::FlatValue::SetValue(void* aValue)
{
    CStackType stackType;
    stackType.type = nullptr;
    stackType.value = aValue;
    SetValue(stackType);
}

RED4EXT_INLINE int32_t RED4ext::TweakDB::FlatValue::ToTDBOffset()
{
    static auto* pTDB = TweakDB::Get();
    std::shared_lock<SharedMutex> _(pTDB->mutex00);

    return static_cast<int32_t>((uintptr_t)this - pTDB->flatDataBuffer);
}
