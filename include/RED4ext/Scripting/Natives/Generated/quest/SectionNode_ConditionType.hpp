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
struct SectionNode_ConditionType : quest::ISceneConditionType
{
    static constexpr const char* NAME = "questSectionNode_ConditionType";
    static constexpr const char* ALIAS = NAME;

    RaRef<scn::SceneResource> sceneFile; // 38
    scn::SceneVersionCheck SceneVersion; // 40
    uint8_t unk41[0x48 - 0x41]; // 41
    CName sectionName; // 48
    quest::SceneConditionType type; // 50
    uint8_t unk51[0x58 - 0x51]; // 51
};
RED4EXT_ASSERT_SIZE(SectionNode_ConditionType, 0x58);
} // namespace quest
using questSectionNode_ConditionType = quest::SectionNode_ConditionType;
} // namespace RED4ext

// clang-format on
