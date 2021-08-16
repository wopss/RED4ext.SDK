#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Types/generated/red/Event.hpp>

namespace RED4ext
{
namespace ent { 
struct AppearanceEvent : red::Event
{
    static constexpr const char* NAME = "entAppearanceEvent";
    static constexpr const char* ALIAS = NAME;

    CName appearanceName; // 40
    uint8_t unk48[0x50 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(AppearanceEvent, 0x50);
} // namespace ent
} // namespace RED4ext
