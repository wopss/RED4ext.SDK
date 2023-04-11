#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/PropOwnershipTransferOptionsType.hpp>

namespace RED4ext
{
namespace scn
{
struct PropOwnershipTransferOptions
{
    static constexpr const char* NAME = "scnPropOwnershipTransferOptions";
    static constexpr const char* ALIAS = NAME;

    scn::PropOwnershipTransferOptionsType type; // 00
    bool dettachFromSlot; // 04
    bool removeFromInventory; // 05
    uint8_t unk06[0x8 - 0x6]; // 6
};
RED4EXT_ASSERT_SIZE(PropOwnershipTransferOptions, 0x8);
} // namespace scn
using scnPropOwnershipTransferOptions = scn::PropOwnershipTransferOptions;
} // namespace RED4ext

// clang-format on
