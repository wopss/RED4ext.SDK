#pragma once

#include <RED4ext/CString.hpp>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Memory/UniquePtr.hpp>
#include <RED4ext/StringView.hpp>

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
    using AllocatorType = Memory::CommandListsAllocator;

    ~CommandListContext();

    void AddPendingBarrier(const D3D12_RESOURCE_BARRIER& aBarrier);
    void Close();
    void FlushPendingBarriers();

    CString debugName;                                               // 000
    uint64_t hash;                                                   // 020
    Microsoft::WRL::ComPtr<ID3D12CommandAllocator> commandAllocator; // 028
    Microsoft::WRL::ComPtr<ID3D12GraphicsCommandList> commandList;   // 030
    uint8_t unk38[0x068 - 0x038];                                    // 038
    CommandListType type;                                            // 068
    uint8_t unk6c[0x528 - 0x06c];                                    // 06C
    DynArray<D3D12_RESOURCE_BARRIER> pendingBarriers;                // 528
    uint8_t unk538[0x650 - 0x538];                                   // 538
};
RED4EXT_ASSERT_SIZE(CommandListContext, 0x650);
RED4EXT_ASSERT_OFFSET(CommandListContext, debugName, 0x000);
RED4EXT_ASSERT_OFFSET(CommandListContext, hash, 0x020);
RED4EXT_ASSERT_OFFSET(CommandListContext, commandAllocator, 0x028);
RED4EXT_ASSERT_OFFSET(CommandListContext, commandList, 0x030);
RED4EXT_ASSERT_OFFSET(CommandListContext, type, 0x068);
RED4EXT_ASSERT_OFFSET(CommandListContext, pendingBarriers, 0x528);

UniquePtr<CommandListContext> AcquireFreeCommandList(CommandListType aType, const StringView& aDebugName = "",
                                                     uint64_t aHash = 0);

} // namespace GpuApi
} // namespace RED4ext

#ifdef RED4EXT_HEADER_ONLY
#include <RED4ext/GpuApi/CommandListContext-inl.hpp>
#endif
