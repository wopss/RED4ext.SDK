#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/Object.hpp>

namespace RED4ext
{
namespace cp
{
struct PlayerDetector_PseudoDevice : game::Object
{
    static constexpr const char* NAME = "cpPlayerDetector_PseudoDevice";
    static constexpr const char* ALIAS = NAME;

    NodeRef playerDetector; // 240
};
RED4EXT_ASSERT_SIZE(PlayerDetector_PseudoDevice, 0x248);
} // namespace cp
using cpPlayerDetector_PseudoDevice = cp::PlayerDetector_PseudoDevice;
} // namespace RED4ext

// clang-format on
