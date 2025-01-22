#pragma once

#ifdef RED4EXT_STATIC_LIB
#include <D3D12MemAlloc.h>
#endif

#include <RED4ext/Detail/AddressHashes.hpp>
#include <RED4ext/Relocation.hpp>

RED4EXT_INLINE HRESULT D3D12MA::Allocator::CreateResource(const ALLOCATION_DESC* pAllocDesc,
                                                          const D3D12_RESOURCE_DESC* pResourceDesc,
                                                          D3D12_RESOURCE_STATES InitialResourceState,
                                                          const D3D12_CLEAR_VALUE* pOptimizedClearValue,
                                                          Allocation** ppAllocation, REFIID riidResource,
                                                          void** ppvResource)
{
    using func_t = HRESULT (*)(Allocator*, const ALLOCATION_DESC*, const D3D12_RESOURCE_DESC*, D3D12_RESOURCE_STATES,
                               const D3D12_CLEAR_VALUE*, Allocation**, REFIID, void**);
    static const RED4ext::UniversalRelocFunc<func_t> func(RED4ext::Detail::AddressHashes::Allocator_CreateResource);
    return func(this, pAllocDesc, pResourceDesc, InitialResourceState, pOptimizedClearValue, ppAllocation, riidResource,
                ppvResource);
}
