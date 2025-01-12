#pragma once

#ifdef RED4EXT_STATIC_LIB
#include <RED4ext/GpuApi/CommandListContext.hpp>
#endif

#include <RED4ext/Relocation.hpp>

RED4EXT_INLINE void RED4ext::GpuApi::CommandListContext::AddPendingBarrier(const D3D12_RESOURCE_BARRIER& aBarrier)
{
    using func_t = void (*)(CommandListContext*, const D3D12_RESOURCE_BARRIER&);
    static UniversalRelocFunc<func_t> func(Detail::AddressHashes::CommandListContext_AddPendingBarrier);
    func(this, aBarrier);
}

RED4EXT_INLINE void RED4ext::GpuApi::CommandListContext::Close()
{
    using func_t = void (*)(CommandListContext*);
    static UniversalRelocFunc<func_t> func(Detail::AddressHashes::CommandListContext_Close);
    func(this);
}

RED4EXT_INLINE void RED4ext::GpuApi::CommandListContext::FlushPendingBarriers()
{
    using func_t = void (*)(CommandListContext*);
    static UniversalRelocFunc<func_t> func(Detail::AddressHashes::CommandListContext_FlushPendingBarriers);
    func(this);
}

RED4EXT_INLINE RED4ext::GpuApi::CommandListContext* GetFreeCommandList(RED4ext::GpuApi::CommandListType aType)
{
    // NOTE: this function has parameters for hash and name but they appear unused.
    using func_t =
        RED4ext::GpuApi::CommandListContext** (*)(RED4ext::GpuApi::CommandListContext**,
                                                  RED4ext::GpuApi::CommandListType, RED4ext::CString*, uint64_t);
    static RED4ext::UniversalRelocFunc<func_t> func(RED4ext::Detail::AddressHashes::GetFreeCommandList);

    RED4ext::GpuApi::CommandListContext* outContext = nullptr;
    func(&outContext, aType, nullptr, 0);
    return outContext;
}
