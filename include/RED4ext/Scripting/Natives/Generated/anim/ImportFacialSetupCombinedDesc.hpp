#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/ImportFacialSetupDesc.hpp>

namespace RED4ext
{
namespace anim
{
struct ImportFacialSetupCombinedDesc
{
    static constexpr const char* NAME = "animImportFacialSetupCombinedDesc";
    static constexpr const char* ALIAS = NAME;

    anim::ImportFacialSetupDesc face; // 00
    anim::ImportFacialSetupDesc eyes; // D0
    anim::ImportFacialSetupDesc tongue; // 1A0
    DynArray<uint16_t> usedTransformIndices; // 270
    DynArray<int16_t> lipsyncOverrideToMainPosesTracksMapping; // 280
    int16_t firstLipsyncOverrideTrackIndex; // 290
    uint8_t unk292[0x298 - 0x292]; // 292
};
RED4EXT_ASSERT_SIZE(ImportFacialSetupCombinedDesc, 0x298);
} // namespace anim
using animImportFacialSetupCombinedDesc = anim::ImportFacialSetupCombinedDesc;
} // namespace RED4ext

// clang-format on
