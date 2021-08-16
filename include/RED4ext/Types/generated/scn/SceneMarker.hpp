#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Types/generated/world/IMarker.hpp>

namespace RED4ext
{
namespace scn { 
struct SceneMarker : world::IMarker
{
    static constexpr const char* NAME = "scnSceneMarker";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(SceneMarker, 0x30);
} // namespace scn
} // namespace RED4ext
