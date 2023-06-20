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

    uint8_t unk40[0x48 - 0x40]; // 40
    Vector2 pos; // 48
    CName cursorForDevice; // 50
    bool isVisible; // 58
    uint8_t unk59[0x60 - 0x59]; // 59
};
RED4EXT_ASSERT_SIZE(CursorInfo, 0x60);
} // namespace ink
using inkCursorInfo = ink::CursorInfo;
} // namespace RED4ext

// clang-format on
