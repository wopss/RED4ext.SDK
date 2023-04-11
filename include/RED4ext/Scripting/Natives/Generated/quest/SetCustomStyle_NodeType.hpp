#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/CustomStyle.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IPhoneManagerNodeType.hpp>

namespace RED4ext
{
namespace quest
{
struct SetCustomStyle_NodeType : quest::IPhoneManagerNodeType
{
    static constexpr const char* NAME = "questSetCustomStyle_NodeType";
    static constexpr const char* ALIAS = NAME;

    quest::CustomStyle style; // 38
    bool isActive; // 3C
    uint8_t unk3D[0x40 - 0x3D]; // 3D
};
RED4EXT_ASSERT_SIZE(SetCustomStyle_NodeType, 0x40);
} // namespace quest
using questSetCustomStyle_NodeType = quest::SetCustomStyle_NodeType;
} // namespace RED4ext

// clang-format on
