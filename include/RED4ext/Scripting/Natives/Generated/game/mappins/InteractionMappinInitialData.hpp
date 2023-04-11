#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/mappins/MappinData.hpp>

namespace RED4ext
{
namespace game::mappins
{
struct InteractionMappinInitialData : game::mappins::MappinData
{
    static constexpr const char* NAME = "gamemappinsInteractionMappinInitialData";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk78[0x90 - 0x78]; // 78
};
RED4EXT_ASSERT_SIZE(InteractionMappinInitialData, 0x90);
} // namespace game::mappins
using gamemappinsInteractionMappinInitialData = game::mappins::InteractionMappinInitialData;
} // namespace RED4ext

// clang-format on
