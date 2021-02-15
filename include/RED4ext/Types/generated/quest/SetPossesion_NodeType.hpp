#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/game/data/PlayerPossesion.hpp>
#include <RED4ext/Types/generated/quest/ISceneManagerNodeType.hpp>

namespace RED4ext
{
namespace quest { 
struct SetPossesion_NodeType : quest::ISceneManagerNodeType
{
    static constexpr const char* NAME = "questSetPossesion_NodeType";
    static constexpr const char* ALIAS = NAME;

    game::data::PlayerPossesion playerPossesion; // 38
    uint8_t unk3C[0x40 - 0x3C]; // 3C
};
RED4EXT_ASSERT_SIZE(SetPossesion_NodeType, 0x40);
} // namespace quest
} // namespace RED4ext
