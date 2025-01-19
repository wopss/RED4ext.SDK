#pragma once

#ifdef RED4EXT_STATIC_LIB
#include <RED4ext/GpuApi/CommandListContext.hpp>
#endif

#include <RED4ext/Relocation.hpp>

namespace RED4ext::GpuApi
{
RED4EXT_INLINE void CommandListContext::AddPendingBarrier(const D3D12_RESOURCE_BARRIER& aBarrier)
{
    using func_t = void (*)(CommandListContext*, const D3D12_RESOURCE_BARRIER&);
    static const UniversalRelocFunc<func_t> func(Detail::AddressHashes::CommandListContext_AddPendingBarrier);
    func(this, aBarrier);
}

RED4EXT_INLINE void CommandListContext::Close()
{
    using func_t = void (*)(CommandListContext*);
    static const UniversalRelocFunc<func_t> func(Detail::AddressHashes::CommandListContext_Close);
    func(this);
}

RED4EXT_INLINE void CommandListContext::FlushPendingBarriers()
{
    using func_t = void (*)(CommandListContext*);
    static UniversalRelocFunc<func_t> func(Detail::AddressHashes::CommandListContext_FlushPendingBarriers);
    func(this);
}

RED4EXT_INLINE CommandListContext* AcquireFreeCommandList(CommandListType aType, const StringView& aDebugName,
                                                          uint64_t aHash)
{
    // NOTE: This function has parameters for debug name and hash which seem to be optional.
    // Expects unique ptr as an out param and returns it by reference.
    using func_t = CommandListContext*& (*)(CommandListContext*&, CommandListType, const StringView&, uint64_t);
    static const UniversalRelocFunc<func_t> func(Detail::AddressHashes::GetFreeCommandList);

    // TODO: This should be unique_ptr which function fills in and returns.
    CommandListContext* outContext = nullptr;
    return func(outContext, aType, aDebugName, aHash);
}
} // namespace RED4ext::GpuApi
