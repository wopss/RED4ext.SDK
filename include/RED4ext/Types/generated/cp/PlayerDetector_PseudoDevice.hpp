#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Types/SimpleTypes.hpp>
#include <RED4ext/Types/generated/game/Object.hpp>

namespace RED4ext
{
namespace cp { 
struct PlayerDetector_PseudoDevice : game::Object
{
    static constexpr const char* NAME = "cpPlayerDetector_PseudoDevice";
    static constexpr const char* ALIAS = NAME;

    NodeRef playerDetector; // 230
};
RED4EXT_ASSERT_SIZE(PlayerDetector_PseudoDevice, 0x238);
} // namespace cp
} // namespace RED4ext
