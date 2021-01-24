#pragma once
#include <shared_mutex>

#ifdef RED4EXT_STATIC_LIB
#include <RED4ext/Types/TweakDB.hpp>
#endif

#include <RED4ext/Addresses.hpp>
#include <RED4ext/REDptr.hpp>

RED4EXT_INLINE RED4ext::Handle<RED4ext::IScriptable>* RED4ext::TweakDB::GetRecord(TweakDBID aDBID)
{
    std::shared_lock<SharedMutex> _(mutex01);

    return recordsByID.Get(aDBID);
}

RED4EXT_INLINE RED4ext::DynArray<RED4ext::Handle<RED4ext::IScriptable>>* RED4ext::TweakDB::GetRecordsByType(IRTTIType* apType)
{
    std::shared_lock<SharedMutex> _(mutex01);

    return recordsByType.Get(apType);
}

RED4EXT_INLINE RED4ext::DynArray<RED4ext::TweakDBID>* RED4ext::TweakDB::GetPackage(TweakDBID aDBID)
{
    std::shared_lock<SharedMutex> _(mutex01);

    for (uint32_t i = 0; i != packageIDs.size; ++i)
    {
        if (packageIDs[i] == aDBID)
            return &packageValues[i];
    }
}

RED4EXT_INLINE RED4ext::TweakDB::TweakVal* RED4ext::TweakDB::GetTweakVal(TweakDBID aDBID)
{
    std::shared_lock<SharedMutex> _(mutex00);

    if (!aDBID.IsValid())
        return nullptr;

    // force get offset for now. i don't know if the game sets offset to 0 or leaves it uninitialized..
    if (true || aDBID.tdbOffset[0] == 0 && aDBID.tdbOffset[1] == 0 && aDBID.tdbOffset[2] == 0)
    {
        const auto it = std::find(values.begin(), values.end(), aDBID);
        return it == values.end() ? nullptr : reinterpret_cast<TweakVal*>(valuesBuffer + it->ToTDBOffset());
    }
    return reinterpret_cast<TweakVal*>(valuesBuffer + aDBID.ToTDBOffset());
}

RED4EXT_INLINE RED4ext::TweakDB* RED4ext::TweakDB::Get()
{
    using Get_t = TweakDB* (*)();
    static REDfunc<Get_t> func(Addresses::TweakDB_Get);
    return func();
}

RED4EXT_INLINE bool RED4ext::TweakDB::TweakVal::SetValue(RED4ext::CStackType& aStackType)
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

RED4EXT_INLINE void RED4ext::TweakDB::TweakVal::SetValue(void* apValue)
{
    CStackType stackType;
    stackType.type = nullptr;
    stackType.value = apValue;
    SetValue(stackType);
}
