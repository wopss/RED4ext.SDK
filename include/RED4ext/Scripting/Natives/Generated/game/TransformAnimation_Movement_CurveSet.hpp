#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/TransformAnimation_Movement.hpp>

namespace RED4ext
{
namespace game { 
struct TransformAnimation_Movement_CurveSet : game::TransformAnimation_Movement
{
    static constexpr const char* NAME = "gameTransformAnimation_Movement_CurveSet";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk30[0x50 - 0x30]; // 30
};
RED4EXT_ASSERT_SIZE(TransformAnimation_Movement_CurveSet, 0x50);
} // namespace game
} // namespace RED4ext
