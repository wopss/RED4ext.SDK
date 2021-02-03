#pragma once

#ifdef RED4EXT_STATIC_LIB
#include <RED4ext/Types/TweakDB.hpp>
#endif

#include <RED4ext/Addresses.hpp>
#include <RED4ext/REDptr.hpp>
#include <RED4ext/RTTISystem.hpp>

uintptr_t GetAddressFromInstruction(uintptr_t aRVAAddress, int32_t aAddressOffset)
{
    auto address = RED4ext::Addresses::ImageBase + aRVAAddress;
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

    if (!aDBID.HasTDBOffset())
    {
        const auto it = std::find(flats.begin(), flats.end(), aDBID);
        return it == flats.end() ? nullptr : reinterpret_cast<FlatValue*>(flatDataBuffer + it->ToTDBOffset());
    }
    return reinterpret_cast<FlatValue*>(flatDataBuffer + aDBID.ToTDBOffset());
}

RED4EXT_INLINE RED4ext::TweakDB::FlatValue* RED4ext::TweakDB::CreateFlatValue(const CStackType& aStackType)
{
    using InitFlatValue_t = FlatValue* (*)(TweakDB*, const CStackType*);
    static REDfunc<InitFlatValue_t> InitFlatValue_ExceptInt32(Addresses::TweakDB_InitFlatValue_ExceptInt32);
    static auto* pRTTI = CRTTISystem::Get();
    static auto* pInt32RTTIType = pRTTI->GetType("Int32");
    static auto* pArrayInt32RTTIType = pRTTI->GetType("array:Int32");
    static uintptr_t FlatInt32ValueVftable = GetAddressFromInstruction(Addresses::TweakDB_FlatInt32ValueVftable, 3);
    static uintptr_t FlatArrayInt32ValueVftable = GetAddressFromInstruction(Addresses::TweakDB_FlatArrayInt32ValueVftable, 3);

    auto typeAlignment = aStackType.type->GetAlignment() - 1;
    auto flatValueSize = 8 /* vftable */ + ((typeAlignment + aStackType.type->GetSize()) & ~typeAlignment);
    auto flatDataBufferEnd_Aligned = (7 + flatDataBufferEnd) & ~7; // 8 aligned

    {
        std::lock_guard<SharedMutex> _(mutex00);

        if (flatDataBufferEnd_Aligned + flatValueSize > flatDataBuffer + flatDataBufferSize)
        {
            // TODO: Grow flatDataBuffer
            // [1.6-Steam] *out = sub_1401AAF80(qword_1437824D0 & 0xFFFFFFFFFFFFFFF8ui64, &out, size, alignment)
            // 0F 10 00 66 48 0F 7E C3 0F 11 45 9F 48 85 DB 75 11
            // 140ED7458 mov rcx, cs:qword_1437824D0
            // 140ED745F lea rdx, [rbp - 1]
            // 140ED7463 and rcx, 0FFFFFFFFFFFFFFF8h
            // 140ED7467 mov r9d, esi
            // 140ED746A mov r8d, edi
            // 140ED746D call sub_1401AAF80
            return nullptr;
        }

        if (aStackType.type == pInt32RTTIType)
        {
            *reinterpret_cast<uint64_t*>(flatDataBufferEnd_Aligned) = FlatInt32ValueVftable;
            *reinterpret_cast<uint64_t*>(flatDataBufferEnd_Aligned + 8) = *reinterpret_cast<uint32_t*>(aStackType.value);
            flatDataBufferEnd = flatDataBufferEnd_Aligned + 16;
            return reinterpret_cast<FlatValue*>(flatDataBufferEnd_Aligned);
        }
        else if (aStackType.type == pArrayInt32RTTIType)
        {
            *reinterpret_cast<uint64_t*>(flatDataBufferEnd_Aligned) = FlatArrayInt32ValueVftable;
            pArrayInt32RTTIType->Assign(reinterpret_cast<void*>(flatDataBufferEnd_Aligned + 8), aStackType.value);
            flatDataBufferEnd = flatDataBufferEnd_Aligned + 24;
            return reinterpret_cast<FlatValue*>(flatDataBufferEnd_Aligned);
        }
        else
        {
            return InitFlatValue_ExceptInt32(this, &aStackType);
        }
    }
}

RED4EXT_INLINE void RED4ext::TweakDB::SetFlatDataBuffer(uintptr_t start, uint32_t size)
{
    SetFlatDataBuffer(start, start + size, size);
}

RED4EXT_INLINE void RED4ext::TweakDB::SetFlatDataBuffer(uintptr_t start, uintptr_t end, uint32_t size)
{
    // Used by the game with TweakDBID::ToTDBOffset() and FlatValue::ToValueOffset_*()
    static uintptr_t pStaticFlatDataBuffer = GetAddressFromInstruction(Addresses::TweakDB_StaticFlatDataBuffer, 3);

    flatDataBuffer = start;
    flatDataBufferEnd = end;
    flatDataBufferSize = size;
    *reinterpret_cast<uintptr_t*>(pStaticFlatDataBuffer) = start;
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
    // doing mutex locking here is useless. game accesses "stackType.value" directly by offset into TweakDB::flatDataBuffer
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

RED4EXT_INLINE int32_t RED4ext::TweakDB::FlatValue::ToTDBOffset() const
{
    static auto* pTDB = TweakDB::Get();
    //std::shared_lock<SharedMutex> _(pTDB->mutex00);

    return static_cast<int32_t>((uintptr_t)this - pTDB->flatDataBuffer);
}
