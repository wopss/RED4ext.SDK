#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Types/generated/game/Object.hpp>

namespace RED4ext
{
namespace mp { 
struct PersistentTestBox : game::Object
{
    static constexpr const char* NAME = "mpPersistentTestBox";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk230[0x240 - 0x230]; // 230
};
RED4EXT_ASSERT_SIZE(PersistentTestBox, 0x240);
} // namespace mp
} // namespace RED4ext
