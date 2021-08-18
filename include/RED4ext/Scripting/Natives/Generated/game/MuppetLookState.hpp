#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/EulerAngles.hpp>

namespace RED4ext
{
namespace game { 
struct MuppetLookState
{
    static constexpr const char* NAME = "gameMuppetLookState";
    static constexpr const char* ALIAS = NAME;

    EulerAngles lookDir; // 00
};
RED4EXT_ASSERT_SIZE(MuppetLookState, 0xC);
} // namespace game
} // namespace RED4ext
