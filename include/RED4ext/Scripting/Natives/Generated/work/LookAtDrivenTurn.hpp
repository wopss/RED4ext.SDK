#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/work/IEntry.hpp>

namespace RED4ext
{
namespace work
{
struct LookAtDrivenTurn : work::IEntry
{
    static constexpr const char* NAME = "workLookAtDrivenTurn";
    static constexpr const char* ALIAS = NAME;

    CName turnAnimName; // 38
    int32_t turnAngle; // 40
    float blendTime; // 44
};
RED4EXT_ASSERT_SIZE(LookAtDrivenTurn, 0x48);
} // namespace work
using workLookAtDrivenTurn = work::LookAtDrivenTurn;
} // namespace RED4ext

// clang-format on
