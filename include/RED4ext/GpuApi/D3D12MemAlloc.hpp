#pragma once

#include <RED4ext/Common.hpp>
#include <cstdint>
#include <d3d12.h>


// this file is a recreation of D3D12MemAlloc.h from https://github.com/GPUOpen-LibrariesAndSDKs/D3D12MemoryAllocator as
// it exists in Cyberpunk 2077

namespace RED4ext
{
namespace D3D12MA
{

struct IUnknownImpl
{
    void* vftable;
    uint32_t m_RefCount;
};
RED4EXT_ASSERT_SIZE(IUnknownImpl, 0x10);

struct Allocation : IUnknownImpl
{
    void* m_Allocator;          // 10
    uint64_t m_Size;            // 18
    uint64_t m_Alignment;       // 20
    ID3D12Resource* m_Resource; // 28
    void* m_pPrivateData;       // 30
    wchar_t* m_Name;            // 38
    uint8_t unk40[0x28];        // 40
};
RED4EXT_ASSERT_SIZE(Allocation, 0x68);


enum ALLOCATION_FLAGS 
{
    ALLOCATION_FLAG_NONE = 0,
    ALLOCATION_FLAG_COMMITTED = 0x1,
    ALLOCATION_FLAG_NEVER_ALLOCATE = 0x2,
    ALLOCATION_FLAG_WITHIN_BUDGET = 0x4,
    ALLOCATION_FLAG_UPPER_ADDRESS = 0x8,
    ALLOCATION_FLAG_CAN_ALIAS = 0x10,
    ALLOCATION_FLAG_STRATEGY_MIN_MEMORY = 0x00010000,
    ALLOCATION_FLAG_STRATEGY_MIN_TIME = 0x00020000,
    ALLOCATION_FLAG_STRATEGY_MIN_OFFSET = 0x0004000,
    ALLOCATION_FLAG_STRATEGY_BEST_FIT = ALLOCATION_FLAG_STRATEGY_MIN_MEMORY,
    ALLOCATION_FLAG_STRATEGY_FIRST_FIT = ALLOCATION_FLAG_STRATEGY_MIN_TIME,
    ALLOCATION_FLAG_STRATEGY_MASK =
        ALLOCATION_FLAG_STRATEGY_MIN_MEMORY | ALLOCATION_FLAG_STRATEGY_MIN_TIME | ALLOCATION_FLAG_STRATEGY_MIN_OFFSET
};

struct ALLOCATION_DESC
{
    ALLOCATION_FLAGS Flags;
    D3D12_HEAP_TYPE HeapType;
    D3D12_HEAP_FLAGS ExtraHeapFlags;
    void* CustomPool;
    void* pPrivateData;
};

struct Allocator : IUnknownImpl
{
    HRESULT CreateResource(const ALLOCATION_DESC* pAllocDesc, const D3D12_RESOURCE_DESC* pResourceDesc,
                           D3D12_RESOURCE_STATES InitialResourceState, Allocation** ppAllocation, REFIID riidResource,
                           void** ppvResource);

    uint8_t unk10[0x18 - 0x10]; // 10
};
RED4EXT_ASSERT_SIZE(Allocator, 0x18);

} // namespace D3D12MA
} // namespace RED4ext

#ifdef RED4EXT_HEADER_ONLY
#include <RED4ext/GpuApi/D3D12MemAlloc-inl.hpp>
#endif
