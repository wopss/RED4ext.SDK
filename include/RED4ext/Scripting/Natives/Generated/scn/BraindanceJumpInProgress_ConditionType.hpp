#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/IBraindanceConditionType.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/SceneVersionCheck.hpp>

namespace RED4ext
{
namespace scn { struct SceneResource; }

namespace scn
{
struct BraindanceJumpInProgress_ConditionType : scn::IBraindanceConditionType
{
    static constexpr const char* NAME = "scnBraindanceJumpInProgress_ConditionType";
    static constexpr const char* ALIAS = NAME;

    bool inProgress; // 38
    uint8_t unk39[0x40 - 0x39]; // 39
    RaRef<scn::SceneResource> sceneFile; // 40
    scn::SceneVersionCheck SceneVersion; // 48
    uint8_t unk49[0x50 - 0x49]; // 49
};
RED4EXT_ASSERT_SIZE(BraindanceJumpInProgress_ConditionType, 0x50);
} // namespace scn
using scnBraindanceJumpInProgress_ConditionType = scn::BraindanceJumpInProgress_ConditionType;
} // namespace RED4ext

// clang-format on
