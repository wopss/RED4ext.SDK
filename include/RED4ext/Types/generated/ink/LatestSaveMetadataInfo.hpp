#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>
#include <RED4ext/Types/SimpleTypes.hpp>
#include <RED4ext/Types/generated/ink/LifePath.hpp>

namespace RED4ext
{
namespace ink { 
struct LatestSaveMetadataInfo : IScriptable
{
    static constexpr const char* NAME = "inkLatestSaveMetadataInfo";
    static constexpr const char* ALIAS = "LatestSaveMetadataInfo";

    CString locationName; // 40
    CString trackedQuest; // 60
    ink::LifePath lifePath; // 80
    uint8_t unk81[0x88 - 0x81]; // 81
    double playTime; // 88
    double playthroughTime; // 90
    uint8_t unk98[0xA0 - 0x98]; // 98
};
RED4EXT_ASSERT_SIZE(LatestSaveMetadataInfo, 0xA0);
} // namespace ink
using LatestSaveMetadataInfo = ink::LatestSaveMetadataInfo;
} // namespace RED4ext
