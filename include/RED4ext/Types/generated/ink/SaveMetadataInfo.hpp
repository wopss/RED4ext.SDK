#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>
#include <RED4ext/Types/SimpleTypes.hpp>
#include <RED4ext/Types/generated/ink/LifePath.hpp>
#include <RED4ext/Types/generated/ink/SaveType.hpp>

namespace RED4ext
{
namespace ink { 
struct SaveMetadataInfo : IScriptable
{
    static constexpr const char* NAME = "inkSaveMetadataInfo";
    static constexpr const char* ALIAS = "SaveMetadataInfo";

    int32_t saveIndex; // 40
    uint32_t saveID; // 44
    CString internalName; // 48
    CString locationName; // 68
    CString trackedQuest; // 88
    ink::LifePath lifePath; // A8
    ink::SaveType saveType; // A9
    uint8_t unkAA[0xB0 - 0xAA]; // AA
    uint64_t timestamp; // B0
    double playTime; // B8
    double playthroughTime; // C0
    uint64_t initialLoadingScreenID; // C8
    double level; // D0
    bool isValid; // D8
    uint8_t unkD9[0xE0 - 0xD9]; // D9
};
RED4EXT_ASSERT_SIZE(SaveMetadataInfo, 0xE0);
} // namespace ink
using SaveMetadataInfo = ink::SaveMetadataInfo;
} // namespace RED4ext
