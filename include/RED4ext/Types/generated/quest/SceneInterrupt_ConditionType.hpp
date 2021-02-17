#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Types/SimpleTypes.hpp>
#include <RED4ext/Types/generated/quest/ISceneConditionType.hpp>

namespace RED4ext
{
namespace scn { struct IInterruptCondition; }
namespace scn { struct SceneResource; }

namespace quest { 
struct SceneInterrupt_ConditionType : quest::ISceneConditionType
{
    static constexpr const char* NAME = "questSceneInterrupt_ConditionType";
    static constexpr const char* ALIAS = NAME;

    RaRef<scn::SceneResource> sceneFile; // 38
    bool onlyInSafeMoment; // 40
    uint8_t unk41[0x48 - 0x41]; // 41
    DynArray<Handle<scn::IInterruptCondition>> interruptConditions; // 48
};
RED4EXT_ASSERT_SIZE(SceneInterrupt_ConditionType, 0x58);
} // namespace quest
} // namespace RED4ext
