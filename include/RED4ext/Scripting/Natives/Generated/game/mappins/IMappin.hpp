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
struct IMappin : game::mappins::IVisualObject
{
    static constexpr const char* NAME = "gamemappinsIMappin";
    static constexpr const char* ALIAS = "IMappin";

    uint8_t unk40[0x88 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(IMappin, 0x88);
} // namespace game::mappins
using gamemappinsIMappin = game::mappins::IMappin;
using IMappin = game::mappins::IMappin;
} // namespace RED4ext

// clang-format on
