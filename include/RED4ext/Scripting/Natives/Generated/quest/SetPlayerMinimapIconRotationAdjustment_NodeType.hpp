#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IUIManagerNodeType.hpp>

namespace RED4ext
{
namespace quest
{
struct SetPlayerMinimapIconRotationAdjustment_NodeType : quest::IUIManagerNodeType
{
    static constexpr const char* NAME = "questSetPlayerMinimapIconRotationAdjustment_NodeType";
    static constexpr const char* ALIAS = NAME;

    float rotationAdjustment; // 38
    uint8_t unk3C[0x40 - 0x3C]; // 3C
};
RED4EXT_ASSERT_SIZE(SetPlayerMinimapIconRotationAdjustment_NodeType, 0x40);
} // namespace quest
using questSetPlayerMinimapIconRotationAdjustment_NodeType = quest::SetPlayerMinimapIconRotationAdjustment_NodeType;
} // namespace RED4ext

// clang-format on
