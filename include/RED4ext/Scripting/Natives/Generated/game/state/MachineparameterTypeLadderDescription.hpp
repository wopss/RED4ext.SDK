#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector4.hpp>

namespace RED4ext
{
namespace game::state
{
struct __declspec(align(0x10)) MachineparameterTypeLadderDescription : IScriptable
{
    static constexpr const char* NAME = "gamestateMachineparameterTypeLadderDescription";
    static constexpr const char* ALIAS = "LadderDescription";

    Vector4 position; // 40
    Vector4 normal; // 50
    Vector4 up; // 60
    float topHeightFromPosition; // 70
    float exitStepTop; // 74
    float verticalStepTop; // 78
    float exitStepBottom; // 7C
    float verticalStepBottom; // 80
    float exitStepJump; // 84
    float verticalStepJump; // 88
    float enterOffset; // 8C
};
RED4EXT_ASSERT_SIZE(MachineparameterTypeLadderDescription, 0x90);
} // namespace game::state
using gamestateMachineparameterTypeLadderDescription = game::state::MachineparameterTypeLadderDescription;
using LadderDescription = game::state::MachineparameterTypeLadderDescription;
} // namespace RED4ext

// clang-format on
