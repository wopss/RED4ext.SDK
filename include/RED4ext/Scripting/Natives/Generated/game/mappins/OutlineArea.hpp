#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/mappins/IArea.hpp>

namespace RED4ext
{
namespace game::mappins
{
struct OutlineArea : game::mappins::IArea
{
    static constexpr const char* NAME = "gamemappinsOutlineArea";
    static constexpr const char* ALIAS = "OutlineArea";

    uint8_t unk60[0x78 - 0x60]; // 60
};
RED4EXT_ASSERT_SIZE(OutlineArea, 0x78);
} // namespace game::mappins
using gamemappinsOutlineArea = game::mappins::OutlineArea;
using OutlineArea = game::mappins::OutlineArea;
} // namespace RED4ext

// clang-format on
