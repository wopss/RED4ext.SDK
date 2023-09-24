#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector2.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/UserData.hpp>

namespace RED4ext
{
namespace ink
{
struct CursorInfo : ink::UserData
{
    static constexpr const char* NAME = "inkCursorInfo";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk40[0x50 - 0x40]; // 40
    Vector2 pos; // 50
    CName cursorForDevice; // 58
    bool isVisible; // 60
    uint8_t unk61[0x78 - 0x61]; // 61
};
RED4EXT_ASSERT_SIZE(CursorInfo, 0x78);
} // namespace ink
using inkCursorInfo = ink::CursorInfo;
} // namespace RED4ext

// clang-format on
