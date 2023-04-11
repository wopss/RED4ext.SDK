#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>

namespace RED4ext
{
namespace game { struct ItemObject; }

namespace game::state
{
struct MachineparameterTypeRequestReload : IScriptable
{
    static constexpr const char* NAME = "gamestateMachineparameterTypeRequestReload";
    static constexpr const char* ALIAS = "parameterRequestReload";

    WeakHandle<game::ItemObject> item; // 40
};
RED4EXT_ASSERT_SIZE(MachineparameterTypeRequestReload, 0x50);
} // namespace game::state
using gamestateMachineparameterTypeRequestReload = game::state::MachineparameterTypeRequestReload;
using parameterRequestReload = game::state::MachineparameterTypeRequestReload;
} // namespace RED4ext

// clang-format on
