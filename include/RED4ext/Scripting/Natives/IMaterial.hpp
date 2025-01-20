#pragma once

#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/CResource.hpp>

namespace RED4ext
{
struct IMaterial : CResource
{
    static constexpr const char* NAME = "IMaterial";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk40[0x48 - 0x40];  // 40
    Ref<IMaterial> baseMaterial; // 48
    uint8_t unk60[0x78 - 0x60];  // 60
};
RED4EXT_ASSERT_SIZE(IMaterial, 0x78);
} // namespace RED4ext
