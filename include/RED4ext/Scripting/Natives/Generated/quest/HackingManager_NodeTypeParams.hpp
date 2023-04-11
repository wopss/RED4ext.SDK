#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
namespace quest { struct HackingManager_ActionType; }

namespace quest
{
struct HackingManager_NodeTypeParams
{
    static constexpr const char* NAME = "questHackingManager_NodeTypeParams";
    static constexpr const char* ALIAS = NAME;

    NodeRef objectRef; // 00
    DynArray<Handle<quest::HackingManager_ActionType>> actions; // 08
};
RED4EXT_ASSERT_SIZE(HackingManager_NodeTypeParams, 0x18);
} // namespace quest
using questHackingManager_NodeTypeParams = quest::HackingManager_NodeTypeParams;
} // namespace RED4ext

// clang-format on
