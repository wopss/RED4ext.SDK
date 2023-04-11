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
struct NPCstubData
{
    static constexpr const char* NAME = "gameNPCstubData";
    static constexpr const char* ALIAS = "NPCstubData";

    ent::EntityID spawnerID; // 00
    CName entryID; // 08
};
RED4EXT_ASSERT_SIZE(NPCstubData, 0x10);
} // namespace game
using gameNPCstubData = game::NPCstubData;
using NPCstubData = game::NPCstubData;
} // namespace RED4ext

// clang-format on
