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
struct ChoiceNodeNsTimedParams : ISerializable
{
    static constexpr const char* NAME = "scnChoiceNodeNsTimedParams";
    static constexpr const char* ALIAS = NAME;

    scn::ChoiceNodeNsTimedAction action; // 30
    bool timeLimitedFinish; // 31
    uint8_t unk32[0x34 - 0x32]; // 32
    scn::SceneTime duration; // 34
};
RED4EXT_ASSERT_SIZE(ChoiceNodeNsTimedParams, 0x38);
} // namespace scn
using scnChoiceNodeNsTimedParams = scn::ChoiceNodeNsTimedParams;
} // namespace RED4ext

// clang-format on
