#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>

namespace RED4ext
{
namespace anim
{
struct ImportFacialInitialControlsDesc
{
    static constexpr const char* NAME = "animImportFacialInitialControlsDesc";
    static constexpr const char* ALIAS = NAME;

    DynArray<uint16_t> transformIds; // 00
    DynArray<CName> transformNames; // 10
    DynArray<uint8_t> transformRegions; // 20
};
RED4EXT_ASSERT_SIZE(ImportFacialInitialControlsDesc, 0x30);
} // namespace anim
using animImportFacialInitialControlsDesc = anim::ImportFacialInitialControlsDesc;
} // namespace RED4ext

// clang-format on
