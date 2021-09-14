#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/LifePath.hpp>

namespace RED4ext
{
namespace ink { 
struct LatestSaveMetadataInfo : IScriptable
{
    static constexpr const char* NAME = "inkLatestSaveMetadataInfo";
    static constexpr const char* ALIAS = "LatestSaveMetadataInfo";

    CString locationName; // 40
    CString trackedQuest; // 60
    CString gameVersion; // 80
    ink::LifePath lifePath; // A0
    uint8_t unkA1[0xA8 - 0xA1]; // A1
    double playTime; // A8
    double playthroughTime; // B0
    uint64_t initialLoadingScreenID; // B8
};
RED4EXT_ASSERT_SIZE(LatestSaveMetadataInfo, 0xC0);
} // namespace ink
using LatestSaveMetadataInfo = ink::LatestSaveMetadataInfo;
} // namespace RED4ext
