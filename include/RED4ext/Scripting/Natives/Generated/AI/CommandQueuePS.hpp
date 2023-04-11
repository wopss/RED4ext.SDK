#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ComponentPS.hpp>

namespace RED4ext
{
namespace AI { struct ArgumentInstancePS; }
namespace AI { struct Role; }

namespace AI
{
struct CommandQueuePS : game::ComponentPS
{
    static constexpr const char* NAME = "AICommandQueuePS";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk68[0x338 - 0x68]; // 68
    DynArray<Handle<AI::ArgumentInstancePS>> behaviorArgumentList; // 338
    uint8_t unk348[0x378 - 0x348]; // 348
    Handle<AI::Role> aiRole; // 378
    uint8_t unk388[0x390 - 0x388]; // 388
};
RED4EXT_ASSERT_SIZE(CommandQueuePS, 0x390);
} // namespace AI
using AICommandQueuePS = AI::CommandQueuePS;
} // namespace RED4ext

// clang-format on
