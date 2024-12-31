#include <d3d12.h>
#include <wrl/client.h>

namespace RED4ext
{
namespace GpuApi
{

struct SBufferData
{
    uint32_t bufferSize;
    uint8_t unk04[0x10 - 0x04];
    Microsoft::WRL::ComPtr<ID3D12Resource> DX12Resource;
    void* unk18;
    uint8_t unk20[0xa8 - 0x20]; // 0x20
};
RED4EXT_ASSERT_SIZE(SBufferData, 0xa8);

} // namespace GpuApi
} // namespace RED4ext
