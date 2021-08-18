#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>

namespace RED4ext
{
namespace quest { 
struct SceneLocation
{
    static constexpr const char* NAME = "questSceneLocation";
    static constexpr const char* ALIAS = NAME;

    CName sceneWorldMarkerTag; // 00
};
RED4EXT_ASSERT_SIZE(SceneLocation, 0x8);
} // namespace quest
} // namespace RED4ext
