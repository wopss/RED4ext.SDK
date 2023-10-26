#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/IPlacedComponent.hpp>

namespace RED4ext
{
namespace game::audio
{
struct __declspec(align(0x10)) AcousticPortalComponent : ent::IPlacedComponent
{
    static constexpr const char* NAME = "gameaudioAcousticPortalComponent";
    static constexpr const char* ALIAS = "AcousticPortalComponent";

    uint8_t radius; // 120
    uint8_t nominalRadius; // 121
    bool initialyOpen; // 122
    uint8_t unk123[0x130 - 0x123]; // 123
};
RED4EXT_ASSERT_SIZE(AcousticPortalComponent, 0x130);
} // namespace game::audio
using gameaudioAcousticPortalComponent = game::audio::AcousticPortalComponent;
using AcousticPortalComponent = game::audio::AcousticPortalComponent;
} // namespace RED4ext

// clang-format on
