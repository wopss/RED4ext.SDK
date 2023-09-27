#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
namespace quest
{
struct ResetContainers_NodeTypeParams
{
    static constexpr const char* NAME = "questResetContainers_NodeTypeParams";
    static constexpr const char* ALIAS = NAME;

    NodeRef containerNodeRef; // 00
    bool clearReinitData; // 08
    uint8_t unk09[0x10 - 0x9]; // 9
};
RED4EXT_ASSERT_SIZE(ResetContainers_NodeTypeParams, 0x10);
} // namespace quest
using questResetContainers_NodeTypeParams = quest::ResetContainers_NodeTypeParams;
} // namespace RED4ext

// clang-format on
