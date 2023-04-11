#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/ArgumentType.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/ParameterizationType.hpp>

namespace RED4ext
{

namespace AI
{
struct ArgumentMapping : IScriptable
{
    static constexpr const char* NAME = "AIArgumentMapping";
    static constexpr const char* ALIAS = NAME;

    Variant defaultValue; // 40
    uint8_t unk58[0x5C - 0x58]; // 58
    AI::ParameterizationType parameterizationType; // 5C
    AI::ArgumentType type; // 60
    uint8_t unk64[0x68 - 0x64]; // 64
    Handle<AI::ArgumentMapping> prefixValue; // 68
    CName customTypeName; // 78
};
RED4EXT_ASSERT_SIZE(ArgumentMapping, 0x80);
} // namespace AI
using AIArgumentMapping = AI::ArgumentMapping;
} // namespace RED4ext

// clang-format on
