#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ScriptableSystemRequest.hpp>

namespace RED4ext
{
namespace game
{
struct BlockAmmoDrop : game::ScriptableSystemRequest
{
    static constexpr const char* NAME = "gameBlockAmmoDrop";
    static constexpr const char* ALIAS = "BlockAmmoDrop";

};
RED4EXT_ASSERT_SIZE(BlockAmmoDrop, 0x48);
} // namespace game
using gameBlockAmmoDrop = game::BlockAmmoDrop;
using BlockAmmoDrop = game::BlockAmmoDrop;
} // namespace RED4ext

// clang-format on
