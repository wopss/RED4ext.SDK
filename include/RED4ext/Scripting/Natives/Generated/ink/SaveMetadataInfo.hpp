#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/LifePath.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/SaveStatus.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/SaveType.hpp>

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
    CString gameVersion; // A8
    ink::LifePath lifePath; // C8
    ink::SaveType saveType; // C9
    ink::SaveStatus saveStatus; // CA
    uint8_t unkCB[0xD0 - 0xCB]; // CB
    uint64_t timestamp; // D0
    double playTime; // D8
    double playthroughTime; // E0
    uint64_t initialLoadingScreenID; // E8
    double level; // F0
    bool isValid; // F8
    uint8_t unkF9[0x100 - 0xF9]; // F9
};
RED4EXT_ASSERT_SIZE(SaveMetadataInfo, 0x100);
} // namespace ink
using SaveMetadataInfo = ink::SaveMetadataInfo;
} // namespace RED4ext
