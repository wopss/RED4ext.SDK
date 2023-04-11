#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IPhoneManagerNodeType.hpp>

namespace RED4ext
{
namespace quest
{
struct Minimize_NodeType : quest::IPhoneManagerNodeType
{
    static constexpr const char* NAME = "questMinimize_NodeType";
    static constexpr const char* ALIAS = NAME;

    bool minimize; // 38
    uint8_t unk39[0x40 - 0x39]; // 39
};
RED4EXT_ASSERT_SIZE(Minimize_NodeType, 0x40);
} // namespace quest
using questMinimize_NodeType = quest::Minimize_NodeType;
} // namespace RED4ext

// clang-format on
