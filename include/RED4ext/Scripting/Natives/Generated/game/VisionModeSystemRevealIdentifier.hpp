#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/EntityID.hpp>

namespace RED4ext
{
namespace game
{
struct VisionModeSystemRevealIdentifier
{
    static constexpr const char* NAME = "gameVisionModeSystemRevealIdentifier";
    static constexpr const char* ALIAS = NAME;

    ent::EntityID sourceEntityId; // 00
    CName reason; // 08
};
RED4EXT_ASSERT_SIZE(VisionModeSystemRevealIdentifier, 0x10);
} // namespace game
using gameVisionModeSystemRevealIdentifier = game::VisionModeSystemRevealIdentifier;
} // namespace RED4ext

// clang-format on
