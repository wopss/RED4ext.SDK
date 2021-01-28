#pragma once
#include <shared_mutex>

#ifdef RED4EXT_STATIC_LIB
#include <RED4ext/Types/TweakDB.hpp>
#endif

#include <RED4ext/Addresses.hpp>
#include <RED4ext/REDptr.hpp>

RED4EXT_INLINE RED4ext::Handle<RED4ext::IScriptable>* RED4ext::TweakDB::GetRecord(TweakDBID aDBID)
{
    if (!aDBID.IsValid()) return nullptr;
    std::shared_lock<SharedMutex> _(mutex01);

    return recordsByID.Get(aDBID);
}

RED4EXT_INLINE RED4ext::DynArray<RED4ext::Handle<RED4ext::IScriptable>>* RED4ext::TweakDB::GetRecordsByType(IRTTIType* aType)
{
    std::shared_lock<SharedMutex> _(mutex01);

    return recordsByType.Get(aType);
}

RED4EXT_INLINE RED4ext::DynArray<RED4ext::TweakDBID>* RED4ext::TweakDB::Query(TweakDBID aDBID)
{
    if (!aDBID.IsValid()) return nullptr;
    std::shared_lock<SharedMutex> _(mutex01);

    for (uint32_t i = 0; i != queryIDs.size; ++i)
    {
        if (queryIDs[i] == aDBID)
            return &queryValues[i];
    }

    return nullptr;
}

RED4EXT_INLINE RED4ext::TweakDB::FlatValue* RED4ext::TweakDB::GetFlatValue(TweakDBID aDBID)
{
    if (!aDBID.IsValid()) return nullptr;
    std::shared_lock<SharedMutex> _(mutex00);

    // force get offset for now. i don't know if the game sets offset to 0 or leaves it uninitialized..
    if (true || aDBID.tdbOffset[0] == 0 && aDBID.tdbOffset[1] == 0 && aDBID.tdbOffset[2] == 0)
    {
        const auto it = std::find(flatIDs.begin(), flatIDs.end(), aDBID);
        return it == flatIDs.end() ? nullptr : reinterpret_cast<FlatValue*>(flatValuesBuffer + it->ToTDBOffset());
    }
    return reinterpret_cast<FlatValue*>(flatValuesBuffer + aDBID.ToTDBOffset());
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
