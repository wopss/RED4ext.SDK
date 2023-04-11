#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/mappins/IVisualObject.hpp>

namespace RED4ext
{
namespace game::mappins
{
struct IArea : game::mappins::IVisualObject
{
    static constexpr const char* NAME = "gamemappinsIArea";
    static constexpr const char* ALIAS = "IArea";

    uint8_t unk40[0x60 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(IArea, 0x60);
} // namespace game::mappins
using gamemappinsIArea = game::mappins::IArea;
using IArea = game::mappins::IArea;
} // namespace RED4ext

// clang-format on
