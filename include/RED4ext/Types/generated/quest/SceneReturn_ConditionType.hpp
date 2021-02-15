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
namespace scn { struct IReturnCondition; }
namespace scn { struct SceneResource; }

namespace quest { 
struct SceneReturn_ConditionType : quest::ISceneConditionType
{
    static constexpr const char* NAME = "questSceneReturn_ConditionType";
    static constexpr const char* ALIAS = NAME;

    RaRef<scn::SceneResource> sceneFile; // 38
    DynArray<Handle<scn::IReturnCondition>> returnConditions; // 40
};
RED4EXT_ASSERT_SIZE(SceneReturn_ConditionType, 0x50);
} // namespace quest
} // namespace RED4ext
