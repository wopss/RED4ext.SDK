#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/AICommandParams.hpp>

namespace RED4ext
{
namespace quest { struct UniversalRef; }

namespace quest
{
struct RotateToParams : quest::AICommandParams
{
    static constexpr const char* NAME = "questRotateToParams";
    static constexpr const char* ALIAS = NAME;

    Handle<quest::UniversalRef> facingTargetRef; // 40
    float angleOffset; // 50
    float speed; // 54
};
RED4EXT_ASSERT_SIZE(RotateToParams, 0x58);
} // namespace quest
using questRotateToParams = quest::RotateToParams;
} // namespace RED4ext

// clang-format on
