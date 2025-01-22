#pragma once

#ifdef RED4EXT_STATIC_LIB
#include <RED4ext/GpuApi/CommandListContext.hpp>
#endif

#include <RED4ext/Relocation.hpp>

namespace RED4ext::GpuApi
{
RED4EXT_INLINE CommandListContext::~CommandListContext()
{
    using func_t = void (*)(CommandListContext*);
    static const UniversalRelocFunc<func_t> func(Detail::AddressHashes::CommandListContext_dtor);
    func(this);
}

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

RED4EXT_INLINE UniquePtr<CommandListContext> AcquireFreeCommandList(CommandListType aType, const StringView& aDebugName,
                                                                    uint64_t aHash)
{
    // NOTE: This function has parameters for debug name and hash which seem to be optional.
    using func_t = UniquePtr<CommandListContext>* (*)(UniquePtr<CommandListContext>&, CommandListType,
                                                      const StringView&, uint64_t);
    static const UniversalRelocFunc<func_t> func(Detail::AddressHashes::GetFreeCommandList);

    UniquePtr<CommandListContext> outContext;
    func(outContext, aType, aDebugName, aHash);

    return std::move(outContext);
}
} // namespace RED4ext::GpuApi
