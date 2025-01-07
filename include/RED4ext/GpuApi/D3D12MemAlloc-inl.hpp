#pragma once

#ifdef RED4EXT_STATIC_LIB
#include <RED4ext/GpuApi/D3D12MemAlloc.hpp>
#endif

#include <RED4ext/Detail/AddressHashes.hpp>
#include <RED4ext/Relocation.hpp>

RED4EXT_INLINE HRESULT RED4ext::D3D12MA::Allocator::CreateResource(const ALLOCATION_DESC* pAllocDesc,
                                                                   const D3D12_RESOURCE_DESC* pResourceDesc,
                                                                   D3D12_RESOURCE_STATES InitialResourceState,
                                                                   Allocation** ppAllocation, REFIID riidResource,
                                                                   void** ppvResource)
{
    using func_t = HRESULT (*)(Allocator*, const ALLOCATION_DESC*, const D3D12_RESOURCE_DESC*, D3D12_RESOURCE_STATES,
                               Allocation**, REFIID, void**);
    static UniversalRelocFunc<func_t> func(Detail::AddressHashes::Allocator_CreateResource);
    return func(this, pAllocDesc, pResourceDesc, InitialResourceState, ppAllocation, riidResource, ppvResource);
}