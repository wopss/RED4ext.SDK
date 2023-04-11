#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/ISceneManagerNodeType.hpp>

namespace RED4ext
{
namespace scn { struct SceneResource; }

namespace quest
{
struct ToggleEventExecutionTag_NodeType : quest::ISceneManagerNodeType
{
    static constexpr const char* NAME = "questToggleEventExecutionTag_NodeType";
    static constexpr const char* ALIAS = NAME;

    RaRef<scn::SceneResource> sceneFile; // 38
    CName eventExecutionTag; // 40
    bool mute; // 48
    uint8_t unk49[0x50 - 0x49]; // 49
};
RED4EXT_ASSERT_SIZE(ToggleEventExecutionTag_NodeType, 0x50);
} // namespace quest
using questToggleEventExecutionTag_NodeType = quest::ToggleEventExecutionTag_NodeType;
} // namespace RED4ext

// clang-format on
