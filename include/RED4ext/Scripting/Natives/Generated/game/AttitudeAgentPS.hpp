#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ComponentPS.hpp>

namespace RED4ext
{
namespace game { 
struct AttitudeAgentPS : game::ComponentPS
{
    static constexpr const char* NAME = "gameAttitudeAgentPS";
    static constexpr const char* ALIAS = NAME;

    CName currentAttitudeGroup; // 68
};
RED4EXT_ASSERT_SIZE(AttitudeAgentPS, 0x70);
} // namespace game
} // namespace RED4ext
