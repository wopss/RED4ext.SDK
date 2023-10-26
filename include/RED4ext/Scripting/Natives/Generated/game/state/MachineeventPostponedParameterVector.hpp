#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector4.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/state/MachineeventPostponedParameterBase.hpp>

namespace RED4ext
{
namespace game::state
{
struct __declspec(align(0x10)) MachineeventPostponedParameterVector : game::state::MachineeventPostponedParameterBase
{
    static constexpr const char* NAME = "gamestateMachineeventPostponedParameterVector";
    static constexpr const char* ALIAS = "PSMPostponedParameterVector";

    Vector4 value; // 50
};
RED4EXT_ASSERT_SIZE(MachineeventPostponedParameterVector, 0x60);
} // namespace game::state
using gamestateMachineeventPostponedParameterVector = game::state::MachineeventPostponedParameterVector;
using PSMPostponedParameterVector = game::state::MachineeventPostponedParameterVector;
} // namespace RED4ext

// clang-format on
