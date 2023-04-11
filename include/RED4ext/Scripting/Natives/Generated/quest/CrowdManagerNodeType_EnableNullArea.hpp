#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/ICrowdManager_NodeType.hpp>

namespace RED4ext
{
namespace quest
{
struct CrowdManagerNodeType_EnableNullArea : quest::ICrowdManager_NodeType
{
    static constexpr const char* NAME = "questCrowdManagerNodeType_EnableNullArea";
    static constexpr const char* ALIAS = NAME;

    NodeRef areaReference; // 30
    bool enable; // 38
    uint8_t unk39[0x40 - 0x39]; // 39
};
RED4EXT_ASSERT_SIZE(CrowdManagerNodeType_EnableNullArea, 0x40);
} // namespace quest
using questCrowdManagerNodeType_EnableNullArea = quest::CrowdManagerNodeType_EnableNullArea;
} // namespace RED4ext

// clang-format on
