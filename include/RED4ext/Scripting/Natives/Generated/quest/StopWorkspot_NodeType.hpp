#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IBehaviourManager_NodeType.hpp>

namespace RED4ext
{
namespace quest
{
struct StopWorkspot_NodeType : quest::IBehaviourManager_NodeType
{
    static constexpr const char* NAME = "questStopWorkspot_NodeType";
    static constexpr const char* ALIAS = NAME;

    CName exitAnim; // 70
    bool allowCurrAnimToFinish; // 78
    uint8_t unk79[0x80 - 0x79]; // 79
};
RED4EXT_ASSERT_SIZE(StopWorkspot_NodeType, 0x80);
} // namespace quest
using questStopWorkspot_NodeType = quest::StopWorkspot_NodeType;
} // namespace RED4ext

// clang-format on
