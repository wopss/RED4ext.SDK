#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EquipParam.hpp>

namespace RED4ext
{
namespace game::state
{
struct MachineparameterTypeRequestItem : IScriptable
{
    static constexpr const char* NAME = "gamestateMachineparameterTypeRequestItem";
    static constexpr const char* ALIAS = "parameterRequestItem";

    DynArray<game::EquipParam> requests; // 40
};
RED4EXT_ASSERT_SIZE(MachineparameterTypeRequestItem, 0x50);
} // namespace game::state
using gamestateMachineparameterTypeRequestItem = game::state::MachineparameterTypeRequestItem;
using parameterRequestItem = game::state::MachineparameterTypeRequestItem;
} // namespace RED4ext

// clang-format on
