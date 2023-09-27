#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/CResource.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/ScenesVersionsSceneChanges.hpp>

namespace RED4ext
{
namespace scn
{
struct ScenesVersions : CResource
{
    static constexpr const char* NAME = "scnScenesVersions";
    static constexpr const char* ALIAS = NAME;

    uint32_t currentVersion; // 40
    uint8_t unk44[0x48 - 0x44]; // 44
    DynArray<scn::ScenesVersionsSceneChanges> scenes; // 48
};
RED4EXT_ASSERT_SIZE(ScenesVersions, 0x58);
} // namespace scn
using scnScenesVersions = scn::ScenesVersions;
} // namespace RED4ext

// clang-format on
