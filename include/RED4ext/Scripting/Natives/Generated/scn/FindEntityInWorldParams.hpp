#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EntityReference.hpp>

namespace RED4ext
{
namespace scn
{
struct FindEntityInWorldParams
{
    static constexpr const char* NAME = "scnFindEntityInWorldParams";
    static constexpr const char* ALIAS = NAME;

    game::EntityReference actorRef; // 00
    bool forceMaxVisibility; // 38
    uint8_t unk39[0x40 - 0x39]; // 39
};
RED4EXT_ASSERT_SIZE(FindEntityInWorldParams, 0x40);
} // namespace scn
using scnFindEntityInWorldParams = scn::FindEntityInWorldParams;
} // namespace RED4ext

// clang-format on
