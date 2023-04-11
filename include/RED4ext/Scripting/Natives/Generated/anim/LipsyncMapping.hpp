#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/CResource.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/LipsyncMappingSceneEntry.hpp>

namespace RED4ext
{
namespace anim
{
struct LipsyncMapping : CResource
{
    static constexpr const char* NAME = "animLipsyncMapping";
    static constexpr const char* ALIAS = NAME;

    CName languageCodeName; // 40
    DynArray<uint64_t> scenePaths; // 48
    DynArray<anim::LipsyncMappingSceneEntry> sceneEntries; // 58
};
RED4EXT_ASSERT_SIZE(LipsyncMapping, 0x68);
} // namespace anim
using animLipsyncMapping = anim::LipsyncMapping;
} // namespace RED4ext

// clang-format on
