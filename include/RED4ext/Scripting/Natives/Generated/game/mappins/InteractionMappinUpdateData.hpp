#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/mappins/IMappinUpdateData.hpp>

namespace RED4ext
{
namespace game::mappins
{
struct InteractionMappinUpdateData : game::mappins::IMappinUpdateData
{
    static constexpr const char* NAME = "gamemappinsInteractionMappinUpdateData";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk08[0x18 - 0x8]; // 8
};
RED4EXT_ASSERT_SIZE(InteractionMappinUpdateData, 0x18);
} // namespace game::mappins
using gamemappinsInteractionMappinUpdateData = game::mappins::InteractionMappinUpdateData;
} // namespace RED4ext

// clang-format on
