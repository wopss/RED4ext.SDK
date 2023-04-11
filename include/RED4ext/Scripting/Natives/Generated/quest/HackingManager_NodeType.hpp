#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/HackingManager_NodeTypeParams.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IInteractiveObjectManagerNodeType.hpp>

namespace RED4ext
{
namespace quest
{
struct HackingManager_NodeType : quest::IInteractiveObjectManagerNodeType
{
    static constexpr const char* NAME = "questHackingManager_NodeType";
    static constexpr const char* ALIAS = NAME;

    DynArray<quest::HackingManager_NodeTypeParams> params; // 30
};
RED4EXT_ASSERT_SIZE(HackingManager_NodeType, 0x40);
} // namespace quest
using questHackingManager_NodeType = quest::HackingManager_NodeType;
} // namespace RED4ext

// clang-format on
