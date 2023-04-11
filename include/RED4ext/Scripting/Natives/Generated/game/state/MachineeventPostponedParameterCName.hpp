#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/state/MachineeventPostponedParameterBase.hpp>

namespace RED4ext
{
namespace game::state
{
struct MachineeventPostponedParameterCName : game::state::MachineeventPostponedParameterBase
{
    static constexpr const char* NAME = "gamestateMachineeventPostponedParameterCName";
    static constexpr const char* ALIAS = "PSMPostponedParameterCName";

    CName value; // 50
};
RED4EXT_ASSERT_SIZE(MachineeventPostponedParameterCName, 0x58);
} // namespace game::state
using gamestateMachineeventPostponedParameterCName = game::state::MachineeventPostponedParameterCName;
using PSMPostponedParameterCName = game::state::MachineeventPostponedParameterCName;
} // namespace RED4ext

// clang-format on
