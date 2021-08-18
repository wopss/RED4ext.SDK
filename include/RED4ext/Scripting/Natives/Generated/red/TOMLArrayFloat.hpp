#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/TOMLBaseValue.hpp>

namespace RED4ext
{
namespace red { 
struct TOMLArrayFloat : red::TOMLBaseValue
{
    static constexpr const char* NAME = "redTOMLArrayFloat";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk50[0x60 - 0x50]; // 50
};
RED4EXT_ASSERT_SIZE(TOMLArrayFloat, 0x60);
} // namespace red
} // namespace RED4ext
