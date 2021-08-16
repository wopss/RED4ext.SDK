#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Types/SimpleTypes.hpp>
#include <RED4ext/Types/generated/scn/BraindanceLayer.hpp>
#include <RED4ext/Types/generated/scn/IBraindanceConditionType.hpp>

namespace RED4ext
{
namespace scn { struct SceneResource; }

namespace scn { 
struct BraindanceLayer_ConditionType : scn::IBraindanceConditionType
{
    static constexpr const char* NAME = "scnBraindanceLayer_ConditionType";
    static constexpr const char* ALIAS = NAME;

    scn::BraindanceLayer layer; // 38
    uint8_t unk39[0x40 - 0x39]; // 39
    RaRef<scn::SceneResource> sceneFile; // 40
};
RED4EXT_ASSERT_SIZE(BraindanceLayer_ConditionType, 0x48);
} // namespace scn
} // namespace RED4ext
