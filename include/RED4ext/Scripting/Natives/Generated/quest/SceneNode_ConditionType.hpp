#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/ISceneConditionType.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/SceneConditionType.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/SceneVersionCheck.hpp>

namespace RED4ext
{
namespace scn { struct SceneResource; }

namespace quest
{
struct SceneNode_ConditionType : quest::ISceneConditionType
{
    static constexpr const char* NAME = "questSceneNode_ConditionType";
    static constexpr const char* ALIAS = NAME;

    RaRef<scn::SceneResource> sceneFile; // 38
    scn::SceneVersionCheck SceneVersion; // 40
    quest::SceneConditionType type; // 41
    uint8_t unk42[0x48 - 0x42]; // 42
    CName ActorName; // 48
};
RED4EXT_ASSERT_SIZE(SceneNode_ConditionType, 0x50);
} // namespace quest
using questSceneNode_ConditionType = quest::SceneNode_ConditionType;
} // namespace RED4ext

// clang-format on
