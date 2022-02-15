#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/BaseGameEngine.hpp>

namespace RED4ext
{
struct HeadlessGameEngine : BaseGameEngine
{
    static constexpr const char* NAME = "HeadlessGameEngine";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk2D0[0x2D8 - 0x2D0]; // 2D0
};
RED4EXT_ASSERT_SIZE(HeadlessGameEngine, 0x2D8);
} // namespace RED4ext
