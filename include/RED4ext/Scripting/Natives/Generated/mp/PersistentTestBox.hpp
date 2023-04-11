#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/Object.hpp>

namespace RED4ext
{
namespace mp
{
struct PersistentTestBox : game::Object
{
    static constexpr const char* NAME = "mpPersistentTestBox";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk240[0x250 - 0x240]; // 240
};
RED4EXT_ASSERT_SIZE(PersistentTestBox, 0x250);
} // namespace mp
using mpPersistentTestBox = mp::PersistentTestBox;
} // namespace RED4ext

// clang-format on
