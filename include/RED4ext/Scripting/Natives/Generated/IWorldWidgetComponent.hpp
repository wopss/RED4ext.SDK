#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/Color.hpp>
#include <RED4ext/Scripting/Natives/Generated/WidgetBaseComponent.hpp>

namespace RED4ext
{
namespace world::ui { struct MeshTargetBinding; }

struct __declspec(align(0x10)) IWorldWidgetComponent : WidgetBaseComponent
{
    static constexpr const char* NAME = "IWorldWidgetComponent";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk1A0[0x1D0 - 0x1A0]; // 1A0
    float glitchValue; // 1D0
    uint8_t unk1D4[0x200 - 0x1D4]; // 1D4
    Handle<world::ui::MeshTargetBinding> meshTargetBinding; // 200
    uint8_t unk210[0x290 - 0x210]; // 210
    Color tintColor; // 290
    float screenAreaMultiplier; // 294
    uint32_t textureMinMipBias; // 298
    uint32_t textureMaxMipBias; // 29C
    uint8_t unk2A0[0x2B0 - 0x2A0]; // 2A0
};
RED4EXT_ASSERT_SIZE(IWorldWidgetComponent, 0x2B0);
} // namespace RED4ext

// clang-format on
