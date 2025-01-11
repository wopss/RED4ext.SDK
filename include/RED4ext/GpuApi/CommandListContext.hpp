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
    void Close();
    void FlushPendingBarriers();

    CString debugName;                                               // 00
    uint64_t hash;                                                   // 20
    Microsoft::WRL::ComPtr<ID3D12CommandAllocator> commandAllocator; // 28
    Microsoft::WRL::ComPtr<ID3D12GraphicsCommandList> commandList;   // 30
    uint8_t unk38[0x68 - 0x38];                                      // 48
    CommandListType type;                                            // 68
    uint8_t unk6c[0x528 - 0x6c];                                     // 6C
    DynArray<D3D12_RESOURCE_BARRIER> pendingBariers;                 // 528
    uint8_t unk538[0x650 - 0x538];                                   // 538
};
RED4EXT_ASSERT_SIZE(CommandListContext, 0x650);
RED4EXT_ASSRT_OFFSET(CommandListContext, commandAllocator, 0x28);
RED4EXT_ASSRT_OFFSET(CommandListContext, commandList, 0x30);
RED4EXT_ASSRT_OFFSET(CommandListContext, type, 0x68);
RED4EXT_ASSRT_OFFSET(CommandListContext, pendingBariers, 0x528);

RED4EXT_INLINE CommandListContext* GetFreeCommandList(CommandListType aType)
{
    // NOTE: this function has parameters for hash and name but they appear unused.
    using func_t = CommandListContext** (*)(CommandListContext**, CommandListType, const char*, uint64_t);
    static UniversalRelocFunc<func_t> func(Detail::AddressHashes::GetFreeCommandList);

    CommandListContext* outContext;
    func(&outContext, aType, "", 0);
    return outContext;
}

} // namespace GpuApi
} // namespace RED4ext

#ifdef RED4EXT_HEADER_ONLY
#include <RED4ext/GpuApi/CommandListContext-inl.hpp>
#endif
