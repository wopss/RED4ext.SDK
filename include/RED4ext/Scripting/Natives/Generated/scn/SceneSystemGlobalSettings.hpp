#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace scn
{
struct SceneSystemGlobalSettings
{
    static constexpr const char* NAME = "scnSceneSystemGlobalSettings";
    static constexpr const char* ALIAS = NAME;

    bool syncLipsyncToSceneTime; // 00
};
RED4EXT_ASSERT_SIZE(SceneSystemGlobalSettings, 0x1);
} // namespace scn
using scnSceneSystemGlobalSettings = scn::SceneSystemGlobalSettings;
} // namespace RED4ext

// clang-format on
