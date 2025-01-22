#pragma once

#ifdef RED4EXT_STATIC_LIB
#include <RED4ext/GpuApi/DeviceData.hpp>
#endif

namespace RED4ext::GpuApi
{
RED4EXT_INLINE SDeviceData* GetDeviceData()
{
    static const UniversalRelocPtr<SDeviceData*> dd(Detail::AddressHashes::g_DeviceData);
    return dd;
}
} // namespace RED4ext::GpuApi
