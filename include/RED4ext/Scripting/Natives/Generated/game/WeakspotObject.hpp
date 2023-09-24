#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/Object.hpp>

namespace RED4ext
{
namespace game
{
struct WeakspotObject : game::Object
{
    static constexpr const char* NAME = "gameWeakspotObject";
    static constexpr const char* ALIAS = "WeakspotObject";

    uint8_t unk240[0x298 - 0x240]; // 240
};
RED4EXT_ASSERT_SIZE(WeakspotObject, 0x298);
} // namespace game
using gameWeakspotObject = game::WeakspotObject;
using WeakspotObject = game::WeakspotObject;
} // namespace RED4ext

// clang-format on
