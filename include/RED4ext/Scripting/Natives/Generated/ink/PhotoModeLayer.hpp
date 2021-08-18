#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/FullScreenLayer.hpp>

namespace RED4ext
{
namespace ink { 
struct PhotoModeLayer : ink::FullScreenLayer
{
    static constexpr const char* NAME = "inkPhotoModeLayer";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk148[0x188 - 0x148]; // 148
};
RED4EXT_ASSERT_SIZE(PhotoModeLayer, 0x188);
} // namespace ink
} // namespace RED4ext
