#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>
#include <RED4ext/Scripting/Natives/Generated/Quaternion.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector4.hpp>

namespace RED4ext
{
namespace game::state
{
struct __declspec(align(0x10)) MachineparameterTypeAdjustTransform : IScriptable
{
    static constexpr const char* NAME = "gamestateMachineparameterTypeAdjustTransform";
    static constexpr const char* ALIAS = "AdjustTransform";

    Vector4 position; // 40
    Quaternion rotation; // 50
};
RED4EXT_ASSERT_SIZE(MachineparameterTypeAdjustTransform, 0x60);
} // namespace game::state
using gamestateMachineparameterTypeAdjustTransform = game::state::MachineparameterTypeAdjustTransform;
using AdjustTransform = game::state::MachineparameterTypeAdjustTransform;
} // namespace RED4ext

// clang-format on
