#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/SimpleTypes.hpp>
#include <RED4ext/Types/generated/scn/IBraindanceConditionType.hpp>

namespace RED4ext
{
namespace scn { struct SceneResource; }

namespace scn { 
struct BraindanceResetting_ConditionType : scn::IBraindanceConditionType
{
    static constexpr const char* NAME = "scnBraindanceResetting_ConditionType";
    static constexpr const char* ALIAS = NAME;

    RaRef<scn::SceneResource> sceneFile; // 38
};
RED4EXT_ASSERT_SIZE(BraindanceResetting_ConditionType, 0x40);
} // namespace scn
} // namespace RED4ext
