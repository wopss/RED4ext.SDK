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
struct BraindanceResetting_ConditionType : scn::IBraindanceConditionType
{
    static constexpr const char* NAME = "scnBraindanceResetting_ConditionType";
    static constexpr const char* ALIAS = NAME;

    RaRef<scn::SceneResource> sceneFile; // 38
    scn::SceneVersionCheck SceneVersion; // 40
    uint8_t unk41[0x48 - 0x41]; // 41
};
RED4EXT_ASSERT_SIZE(BraindanceResetting_ConditionType, 0x48);
} // namespace scn
using scnBraindanceResetting_ConditionType = scn::BraindanceResetting_ConditionType;
} // namespace RED4ext

// clang-format on
