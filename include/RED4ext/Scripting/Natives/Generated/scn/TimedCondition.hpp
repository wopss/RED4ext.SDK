#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/ChoiceNodeNsTimedAction.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/SceneTime.hpp>

namespace RED4ext
{
namespace scn
{
struct TimedCondition : ISerializable
{
    static constexpr const char* NAME = "scnTimedCondition";
    static constexpr const char* ALIAS = NAME;

    scn::SceneTime duration; // 30
    scn::ChoiceNodeNsTimedAction action; // 34
    bool timeLimitedFinish; // 35
    uint8_t unk36[0x50 - 0x36]; // 36
};
RED4EXT_ASSERT_SIZE(TimedCondition, 0x50);
} // namespace scn
using scnTimedCondition = scn::TimedCondition;
} // namespace RED4ext

// clang-format on
