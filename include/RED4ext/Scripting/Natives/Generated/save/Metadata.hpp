#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/save/GameMetadata.hpp>

namespace RED4ext
{
namespace save { 
struct Metadata : save::GameMetadata
{
    static constexpr const char* NAME = "saveMetadata";
    static constexpr const char* ALIAS = NAME;

    uint32_t saveVersion; // 288
    uint32_t gameVersion; // 28C
    uint8_t unk290[0x298 - 0x290]; // 290
    CString timestampString; // 298
    CString name; // 2B8
    uint8_t unk2D8[0x2F8 - 0x2D8]; // 2D8
    CString userName; // 2F8
    CString buildID; // 318
    CString platform; // 338
    CString censorFlags; // 358
    CString buildConfiguration; // 378
    uint32_t fileSize; // 398
    bool isForced; // 39C
    bool isCheckpoint; // 39D
    uint8_t unk39E[0x3A0 - 0x39E]; // 39E
    uint64_t initialLoadingScreenID; // 3A0
    bool isStoryMode; // 3A8
    bool isPointOfNoReturn; // 3A9
    bool isEndGameSave; // 3AA
    uint8_t unk3AB[0x3B0 - 0x3AB]; // 3AB
};
RED4EXT_ASSERT_SIZE(Metadata, 0x3B0);
} // namespace save
} // namespace RED4ext
