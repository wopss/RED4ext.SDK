#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/SceneMarkerInternalsAnimEventEntry.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/IMarker.hpp>

namespace RED4ext
{
namespace scn { 
struct SceneMarker : world::IMarker
{
    static constexpr const char* NAME = "scnSceneMarker";
    static constexpr const char* ALIAS = NAME;

    DynArray<scn::SceneMarkerInternalsAnimEventEntry> markers; // 30
};
RED4EXT_ASSERT_SIZE(SceneMarker, 0x40);
} // namespace scn
} // namespace RED4ext
