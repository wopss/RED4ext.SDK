#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Types/generated/game/Component.hpp>
#include <RED4ext/Types/generated/game/VisionModuleParams.hpp>

namespace RED4ext
{
namespace game { 
struct VisionModeComponent : game::Component
{
    static constexpr const char* NAME = "gameVisionModeComponent";
    static constexpr const char* ALIAS = "VisionModeComponent";

    uint8_t unkA8[0xB0 - 0xA8]; // A8
    DynArray<game::VisionModuleParams> availableVisionModes; // B0
    uint8_t unkC0[0x108 - 0xC0]; // C0
};
RED4EXT_ASSERT_SIZE(VisionModeComponent, 0x108);
} // namespace game
using VisionModeComponent = game::VisionModeComponent;
} // namespace RED4ext
