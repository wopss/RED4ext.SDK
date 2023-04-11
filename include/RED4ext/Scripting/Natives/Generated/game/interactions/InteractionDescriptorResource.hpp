#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/CResource.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/interactions/CHotSpotDefinition.hpp>

namespace RED4ext
{
namespace game::interactions
{
struct InteractionDescriptorResource : CResource
{
    static constexpr const char* NAME = "gameinteractionsInteractionDescriptorResource";
    static constexpr const char* ALIAS = NAME;

    game::interactions::CHotSpotDefinition definition; // 40
    uint8_t unkF0[0x100 - 0xF0]; // F0
};
RED4EXT_ASSERT_SIZE(InteractionDescriptorResource, 0x100);
} // namespace game::interactions
using gameinteractionsInteractionDescriptorResource = game::interactions::InteractionDescriptorResource;
} // namespace RED4ext

// clang-format on
