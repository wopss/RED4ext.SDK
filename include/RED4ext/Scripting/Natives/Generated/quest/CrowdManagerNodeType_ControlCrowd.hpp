#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/ControlCrowdAction.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/ICrowdManager_NodeType.hpp>

namespace RED4ext
{
namespace quest { 
struct CrowdManagerNodeType_ControlCrowd : quest::ICrowdManager_NodeType
{
    static constexpr const char* NAME = "questCrowdManagerNodeType_ControlCrowd";
    static constexpr const char* ALIAS = NAME;

    CName debugSource; // 30
    quest::ControlCrowdAction action; // 38
    uint8_t unk39[0x40 - 0x39]; // 39
};
RED4EXT_ASSERT_SIZE(CrowdManagerNodeType_ControlCrowd, 0x40);
} // namespace quest
} // namespace RED4ext
