#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/ActorId.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/PerformerId.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/PropOwnershipTransferOptions.hpp>

namespace RED4ext
{
namespace scn
{
struct FindEntityInEntityParams
{
    static constexpr const char* NAME = "scnFindEntityInEntityParams";
    static constexpr const char* ALIAS = NAME;

    TweakDBID itemID; // 00
    TweakDBID slotID; // 08
    uint8_t unk10[0x14 - 0x10]; // 10
    scn::PropOwnershipTransferOptions ownershipTransferOptions; // 14
    scn::PerformerId performerId; // 1C
    scn::ActorId actorId; // 20
    bool forceMaxVisibility; // 24
    uint8_t unk25[0x28 - 0x25]; // 25
};
RED4EXT_ASSERT_SIZE(FindEntityInEntityParams, 0x28);
} // namespace scn
using scnFindEntityInEntityParams = scn::FindEntityInEntityParams;
} // namespace RED4ext

// clang-format on
