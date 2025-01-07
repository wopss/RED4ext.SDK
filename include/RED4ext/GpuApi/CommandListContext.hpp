#pragma once

#include <RED4ext/DynArray.hpp>
#include <REd4ext/CString.hpp>
#include <d3d12.h>
#include <wrl/client.h>

namespace RED4ext
{
namespace GpuApi
{

enum class CommandListType
{
    Invalid,
    Default,
    CopySync,
    CopyAsync,
    Compute,
    MAX
};

struct CommandListContext
{
    void AddPendingBarrier(const D3D12_RESOURCE_BARRIER& aBarrier);
    void FlushPendingBarriers();

    CString debugName;
    uint64_t hash;
    Microsoft::WRL::ComPtr<ID3D12CommandAllocator> commandAllocator;
    Microsoft::WRL::ComPtr<ID3D12GraphicsCommandList> commandList;
    uint8_t unk38[0x68 - 0x38];
    CommandListType type;
    uint8_t unk6c[0x528 - 0x6c];
    DynArray<D3D12_RESOURCE_BARRIER> pendingBariers;
    uint8_t unk538[0x650 - 0x538];
};
RED4EXT_ASSERT_SIZE(CommandListContext, 0x650);

RED4EXT_INLINE CommandListContext* GetFreeCommandList(CommandListType aType)
{
    using func_t = CommandListContext** (*)(CommandListContext**, CommandListType, const char*, const uint64_t); // actually calling this function with a name and hash, crashes
    static UniversalRelocFunc<func_t> func(Detail::AddressHashes::GetFreeCommandList);

    CommandListContext* outContext;
    func(&outContext, aType, "", 0); // name and hash are probably intended for debugging, should we keep it?
    return outContext;
}

} // namespace GpuApi
} // namespace RED4ext

#ifdef RED4EXT_HEADER_ONLY
#include <RED4ext/GpuApi/CommandListContext-inl.hpp>
#endif
