#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/ScenesVersionsChangedRecord.hpp>

namespace RED4ext
{
namespace scn { struct SceneResource; }

namespace scn
{
struct ScenesVersionsSceneChanges
{
    static constexpr const char* NAME = "scnScenesVersionsSceneChanges";
    static constexpr const char* ALIAS = NAME;

    RaRef<scn::SceneResource> scene; // 00
    DynArray<scn::ScenesVersionsChangedRecord> sceneChanges; // 08
};
RED4EXT_ASSERT_SIZE(ScenesVersionsSceneChanges, 0x18);
} // namespace scn
using scnScenesVersionsSceneChanges = scn::ScenesVersionsSceneChanges;
} // namespace RED4ext

// clang-format on
