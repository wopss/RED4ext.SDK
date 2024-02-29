#pragma once

#ifdef RED4EXT_STATIC_LIB
#include <RED4ext/SystemUpdate.hpp>
#endif

#include <RED4ext/Detail/AddressHashes.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Relocation.hpp>
#include <RED4ext/Scripting/Natives/Generated/IUpdatableSystem.hpp>

RED4EXT_INLINE void RED4ext::UpdateRegistrar::RegisterUpdate(UpdateTickGroup aGroup, IUpdatableSystem* aSystem,
                                                             const char* aName, GroupUpdateCallback&& aCallback)
{
    using func_t = void (*)(UpdateRegistrar*, UpdateTickGroup, CClass*, const char*, GroupUpdateCallback&&, uint32_t);
    static UniversalRelocFunc<func_t> func(Detail::AddressHashes::UpdateRegistrar_RegisterGroupUpdate);

    func(this, aGroup, aSystem->GetNativeType(), aName, std::forward<GroupUpdateCallback>(aCallback), 0);
}

RED4EXT_INLINE void RED4ext::UpdateRegistrar::RegisterUpdate(UpdateBucketMask aBuckets, UpdateBucketStage aStage,
                                                             IUpdatableSystem* aSystem, const char* aName,
                                                             BucketUpdateCallback&& aCallback)
{
    using func_t = void (*)(UpdateRegistrar*, UpdateBucketMask, UpdateBucketStage, CClass*, const char*,
                            BucketUpdateCallback&&, uint32_t);
    static UniversalRelocFunc<func_t> func(Detail::AddressHashes::UpdateRegistrar_RegisterBucketUpdate);

    func(this, aBuckets, aStage, aSystem->GetNativeType(), aName, std::forward<BucketUpdateCallback>(aCallback), 0);
}
