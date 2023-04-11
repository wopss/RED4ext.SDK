#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/IPositionProvider.hpp>

namespace RED4ext
{
namespace game
{
struct LookAtFacingPositionProvider : ent::IPositionProvider
{
    static constexpr const char* NAME = "gameLookAtFacingPositionProvider";
    static constexpr const char* ALIAS = "LookAtFacingPositionProvider";

    uint8_t unk50[0x60 - 0x50]; // 50
};
RED4EXT_ASSERT_SIZE(LookAtFacingPositionProvider, 0x60);
} // namespace game
using gameLookAtFacingPositionProvider = game::LookAtFacingPositionProvider;
using LookAtFacingPositionProvider = game::LookAtFacingPositionProvider;
} // namespace RED4ext

// clang-format on
