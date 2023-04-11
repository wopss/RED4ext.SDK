#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/EntityID.hpp>

namespace RED4ext
{
namespace game
{
struct VendorData
{
    static constexpr const char* NAME = "gameVendorData";
    static constexpr const char* ALIAS = "VendorData";

    CString vendorId; // 00
    ent::EntityID entityID; // 20
    bool isActive; // 28
    uint8_t unk29[0x30 - 0x29]; // 29
};
RED4EXT_ASSERT_SIZE(VendorData, 0x30);
} // namespace game
using gameVendorData = game::VendorData;
using VendorData = game::VendorData;
} // namespace RED4ext

// clang-format on
