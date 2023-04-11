#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/ArgumentType.hpp>

namespace RED4ext
{
namespace AI::behavior
{
struct TypeRef
{
    static constexpr const char* NAME = "AIbehaviorTypeRef";
    static constexpr const char* ALIAS = NAME;

    bool isSet; // 00
    uint8_t unk01[0x8 - 0x1]; // 1
    CName customType; // 08
    AI::ArgumentType enumeratedType; // 10
    uint8_t unk14[0x18 - 0x14]; // 14
};
RED4EXT_ASSERT_SIZE(TypeRef, 0x18);
} // namespace AI::behavior
using AIbehaviorTypeRef = AI::behavior::TypeRef;
} // namespace RED4ext

// clang-format on
