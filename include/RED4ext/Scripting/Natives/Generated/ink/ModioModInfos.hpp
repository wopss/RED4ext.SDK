#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Containers/DynArray.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/ModioModState.hpp>

namespace RED4ext
{
namespace ink
{
struct ModioModInfos
{
    static constexpr const char* NAME = "inkModioModInfos";
    static constexpr const char* ALIAS = "ModioModInfos";

    CString name; // 00
    CString authorName; // 20
    CString authorLinkedAccountName; // 40
    int64_t authorID; // 60
    CString version; // 68
    CString changelog; // 88
    CString description; // A8
    CString summary; // C8
    int64_t rating; // E8
    uint64_t size; // F0
    int64_t downloadsTotal; // F8
    int64_t dateAdded; // 100
    int64_t dateUpdated; // 108
    int64_t id; // 110
    bool bIsUserSubscribedToMod; // 118
    bool bIsModInstalled; // 119
    bool bIsUserLikingMod; // 11A
    bool bIsModEnabledForUser; // 11B
    bool bIsModNewForUser; // 11C
    bool bIsModWaitingEndOfInstallation; // 11D
    uint8_t unk11E[0x120 - 0x11E]; // 11E
    int64_t gallerySize; // 120
    ink::ModioModState modState; // 128
    uint8_t unk12C[0x1E0 - 0x12C]; // 12C
    DynArray<CString> tags; // 1E0
    DynArray<CString> localizedTags; // 1F0
};
RED4EXT_ASSERT_SIZE(ModioModInfos, 0x200);
} // namespace ink
using inkModioModInfos = ink::ModioModInfos;
using ModioModInfos = ink::ModioModInfos;
} // namespace RED4ext

// clang-format on
