#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/CheckDistractedReturnConditionParams.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/IReturnCondition.hpp>

namespace RED4ext
{
namespace scn
{
struct CheckDistractedReturnCondition : scn::IReturnCondition
{
    static constexpr const char* NAME = "scnCheckDistractedReturnCondition";
    static constexpr const char* ALIAS = NAME;

    scn::CheckDistractedReturnConditionParams params; // 30
    uint8_t unk32[0x38 - 0x32]; // 32
};
RED4EXT_ASSERT_SIZE(CheckDistractedReturnCondition, 0x38);
} // namespace scn
using scnCheckDistractedReturnCondition = scn::CheckDistractedReturnCondition;
} // namespace RED4ext

// clang-format on
