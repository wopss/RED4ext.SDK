#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/ESharedVarDefinitionType.hpp>
#include <RED4ext/Scripting/Natives/Generated/LibTreeSharedVarRegistrationName.hpp>

namespace RED4ext
{
namespace AI
{
struct SharedVarDefinition
{
    static constexpr const char* NAME = "AISharedVarDefinition";
    static constexpr const char* ALIAS = NAME;

    AI::ESharedVarDefinitionType type; // 00
    uint8_t unk04[0x8 - 0x4]; // 4
    LibTreeSharedVarRegistrationName name; // 08
};
RED4EXT_ASSERT_SIZE(SharedVarDefinition, 0x10);
} // namespace AI
using AISharedVarDefinition = AI::SharedVarDefinition;
} // namespace RED4ext

// clang-format on
