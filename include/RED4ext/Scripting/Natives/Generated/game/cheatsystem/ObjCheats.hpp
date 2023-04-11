#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>

namespace RED4ext
{
namespace game { struct Object; }

namespace game::cheatsystem
{
struct ObjCheats
{
    static constexpr const char* NAME = "gamecheatsystemObjCheats";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk00[0x10 - 0x0]; // 0
    WeakHandle<game::Object> object; // 10
    int32_t flags; // 20
    uint8_t unk24[0x28 - 0x24]; // 24
};
RED4EXT_ASSERT_SIZE(ObjCheats, 0x28);
} // namespace game::cheatsystem
using gamecheatsystemObjCheats = game::cheatsystem::ObjCheats;
} // namespace RED4ext

// clang-format on
