#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IInteractiveObjectManagerNodeType.hpp>

namespace RED4ext
{
namespace quest
{
struct SetInspectMode_NodeType : quest::IInteractiveObjectManagerNodeType
{
    static constexpr const char* NAME = "questSetInspectMode_NodeType";
    static constexpr const char* ALIAS = NAME;

    CString objectID; // 30
    float startingOffset; // 50
    float zoomOffset; // 54
    float timeInterval; // 58
    uint8_t unk5C[0x60 - 0x5C]; // 5C
};
RED4EXT_ASSERT_SIZE(SetInspectMode_NodeType, 0x60);
} // namespace quest
using questSetInspectMode_NodeType = quest::SetInspectMode_NodeType;
} // namespace RED4ext

// clang-format on
