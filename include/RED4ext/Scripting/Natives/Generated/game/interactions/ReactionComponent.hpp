#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/IComponent.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/interactions/ReactionData.hpp>

namespace RED4ext
{
namespace game::interactions
{
struct ReactionComponent : ent::IComponent
{
    static constexpr const char* NAME = "gameinteractionsReactionComponent";
    static constexpr const char* ALIAS = "ReactionComponent";

    uint8_t unk90[0xB8 - 0x90]; // 90
    DynArray<game::interactions::ReactionData> reactions; // B8
    uint8_t unkC8[0xD8 - 0xC8]; // C8
    bool triggerAutomatically; // D8
    uint8_t unkD9[0xE8 - 0xD9]; // D9
};
RED4EXT_ASSERT_SIZE(ReactionComponent, 0xE8);
} // namespace game::interactions
using gameinteractionsReactionComponent = game::interactions::ReactionComponent;
using ReactionComponent = game::interactions::ReactionComponent;
} // namespace RED4ext

// clang-format on
