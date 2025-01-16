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

RED4EXT_INLINE RED4ext::GpuApi::CommandListContext* RED4ext::GpuApi::AcquireFreeCommandList(RED4ext::GpuApi::CommandListType aType,
                                                                                            const RED4ext::StringView& aDebugName,
                                                                                            uint64_t aHash)
{
    // NOTE: This function has parameters for debug name and hash which seem to be optional.
    // Expects unique ptr as an out param and returns it by reference.
    using func_t = RED4ext::GpuApi::CommandListContext*& (*)(RED4ext::GpuApi::CommandListContext*&,
                                                             RED4ext::GpuApi::CommandListType,
                                                             const RED4ext::StringView&, uint64_t);
    static RED4ext::UniversalRelocFunc<func_t> func(RED4ext::Detail::AddressHashes::GetFreeCommandList);

    // TODO: This should be unique_ptr which function fills in and returns.
    RED4ext::GpuApi::CommandListContext* outContext = nullptr;
    return func(outContext, aType, aDebugName, aHash);
}
