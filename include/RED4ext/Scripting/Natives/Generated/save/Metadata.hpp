#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Containers/DynArray.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/save/GameMetadata.hpp>
#include <RED4ext/Scripting/Natives/Generated/save/ModioModSavedInfo.hpp>

namespace RED4ext
{
namespace save
{
struct Metadata : save::GameMetadata
{
    static constexpr const char* NAME = "saveMetadata";
    static constexpr const char* ALIAS = NAME;

    uint32_t saveVersion; // 298
    uint32_t gameVersion; // 29C
    uint8_t unk2A0[0x2A8 - 0x2A0]; // 2A0
    CString timestampString; // 2A8
    CString name; // 2C8
    uint8_t unk2E8[0x308 - 0x2E8]; // 2E8
    CString userName; // 308
    CString buildID; // 328
    CString platform; // 348
    CString censorFlags; // 368
    CString buildConfiguration; // 388
    uint32_t fileSize; // 3A8
    bool isForced; // 3AC
    bool isCheckpoint; // 3AD
    uint8_t unk3AE[0x3AF - 0x3AE]; // 3AE
    bool isModded; // 3AF
    DynArray<save::ModioModSavedInfo> enabledModioInfo; // 3B0
    uint64_t initialLoadingScreenID; // 3C0
    bool isStoryMode; // 3C8
    bool isPointOfNoReturn; // 3C9
    bool isEndGameSave; // 3CA
    uint8_t unk3CB[0x3D0 - 0x3CB]; // 3CB
    DynArray<CName> additionalContentIds; // 3D0
};
RED4EXT_ASSERT_SIZE(Metadata, 0x3E0);
} // namespace save
using saveMetadata = save::Metadata;
} // namespace RED4ext

// clang-format on
