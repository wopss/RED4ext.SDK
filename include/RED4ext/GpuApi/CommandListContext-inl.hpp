#pragma once

#ifdef RED4EXT_STATIC_LIB
#include <RED4ext/GpuApi/CommandListContext.hpp>
#endif

#include <RED4ext/Relocation.hpp>

RED4EXT_INLINE void RED4ext::GpuApi::CommandListContext::AddPendingBarrier(const D3D12_RESOURCE_BARRIER* aBarrier)
{
    using func_t = void (*)(CommandListContext*, const D3D12_RESOURCE_BARRIER*);
    static UniversalRelocFunc<func_t> func(Detail::AddressHashes::CommandListContext_AddPendingBarrier);
    func(this, aBarrier);
}

RED4EXT_INLINE void RED4ext::GpuApi::CommandListContext::FlushPendingBarriers()
{
    using func_t = void (*)(CommandListContext*);
    static UniversalRelocFunc<func_t > func(Detail::AddressHashes::CommandListContext_FlushPendingBarriers);
    func(this);
}
