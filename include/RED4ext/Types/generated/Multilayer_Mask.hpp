#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/CResource.hpp>
#include <RED4ext/Types/generated/rend/RenderMultilayerMaskResource.hpp>

namespace RED4ext
{
struct Multilayer_Mask : CResource
{
    static constexpr const char* NAME = "Multilayer_Mask";
    static constexpr const char* ALIAS = NAME;

    rend::RenderMultilayerMaskResource renderResourceBlob; // 40
    uint8_t unk50[0x70 - 0x50]; // 50
};
RED4EXT_ASSERT_SIZE(Multilayer_Mask, 0x70);
} // namespace RED4ext
