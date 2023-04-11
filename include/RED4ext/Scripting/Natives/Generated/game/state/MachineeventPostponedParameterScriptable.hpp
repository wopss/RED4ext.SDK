#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/state/MachineeventPostponedParameterBase.hpp>

namespace RED4ext
{
struct IScriptable;

namespace game::state
{
struct MachineeventPostponedParameterScriptable : game::state::MachineeventPostponedParameterBase
{
    static constexpr const char* NAME = "gamestateMachineeventPostponedParameterScriptable";
    static constexpr const char* ALIAS = "PSMPostponedParameterScriptable";

    Handle<IScriptable> value; // 50
};
RED4EXT_ASSERT_SIZE(MachineeventPostponedParameterScriptable, 0x60);
} // namespace game::state
using gamestateMachineeventPostponedParameterScriptable = game::state::MachineeventPostponedParameterScriptable;
using PSMPostponedParameterScriptable = game::state::MachineeventPostponedParameterScriptable;
} // namespace RED4ext

// clang-format on
