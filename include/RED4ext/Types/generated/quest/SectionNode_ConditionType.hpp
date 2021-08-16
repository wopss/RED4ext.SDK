#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Types/SimpleTypes.hpp>
#include <RED4ext/Types/generated/quest/ISceneConditionType.hpp>
#include <RED4ext/Types/generated/quest/SceneConditionType.hpp>

namespace RED4ext
{
namespace scn { struct SceneResource; }

namespace quest { 
struct SectionNode_ConditionType : quest::ISceneConditionType
{
    static constexpr const char* NAME = "questSectionNode_ConditionType";
    static constexpr const char* ALIAS = NAME;

    RaRef<scn::SceneResource> sceneFile; // 38
    CName sectionName; // 40
    quest::SceneConditionType type; // 48
    uint8_t unk49[0x50 - 0x49]; // 49
};
RED4EXT_ASSERT_SIZE(SectionNode_ConditionType, 0x50);
} // namespace quest
} // namespace RED4ext
