#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/BraindancePerspective.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/IBraindanceConditionType.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/SceneVersionCheck.hpp>

namespace RED4ext
{
namespace scn { struct SceneResource; }

namespace scn
{
struct BraindancePerspective_ConditionType : scn::IBraindanceConditionType
{
    static constexpr const char* NAME = "scnBraindancePerspective_ConditionType";
    static constexpr const char* ALIAS = NAME;

    scn::BraindancePerspective perspective; // 38
    uint8_t unk39[0x40 - 0x39]; // 39
    RaRef<scn::SceneResource> sceneFile; // 40
    scn::SceneVersionCheck SceneVersion; // 48
    uint8_t unk49[0x50 - 0x49]; // 49
};
RED4EXT_ASSERT_SIZE(BraindancePerspective_ConditionType, 0x50);
} // namespace scn
using scnBraindancePerspective_ConditionType = scn::BraindancePerspective_ConditionType;
} // namespace RED4ext

// clang-format on
