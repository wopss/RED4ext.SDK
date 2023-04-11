#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IVehicleManagerNodeType.hpp>

namespace RED4ext
{
namespace quest
{
struct EnablePlayerVehicle_NodeType : quest::IVehicleManagerNodeType
{
    static constexpr const char* NAME = "questEnablePlayerVehicle_NodeType";
    static constexpr const char* ALIAS = NAME;

    CString vehicle; // 30
    bool enable; // 50
    bool despawn; // 51
    bool makePlayerActiveVehicle; // 52
    uint8_t unk53[0x58 - 0x53]; // 53
};
RED4EXT_ASSERT_SIZE(EnablePlayerVehicle_NodeType, 0x58);
} // namespace quest
using questEnablePlayerVehicle_NodeType = quest::EnablePlayerVehicle_NodeType;
} // namespace RED4ext

// clang-format on
