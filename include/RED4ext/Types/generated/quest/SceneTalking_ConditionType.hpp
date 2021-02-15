#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Types/SimpleTypes.hpp>
#include <RED4ext/Types/generated/game/EntityReference.hpp>
#include <RED4ext/Types/generated/quest/ISceneConditionType.hpp>

namespace RED4ext
{
namespace scn { struct SceneResource; }

namespace quest { 
struct SceneTalking_ConditionType : quest::ISceneConditionType
{
    static constexpr const char* NAME = "questSceneTalking_ConditionType";
    static constexpr const char* ALIAS = NAME;

    game::EntityReference GlobalEntityRef; // 38
    RaRef<scn::SceneResource> sceneFile; // 70
    CName SectionName; // 78
    CString ActorName; // 80
    bool isInverted; // A0
    uint8_t unkA1[0xA8 - 0xA1]; // A1
};
RED4EXT_ASSERT_SIZE(SceneTalking_ConditionType, 0xA8);
} // namespace quest
} // namespace RED4ext
