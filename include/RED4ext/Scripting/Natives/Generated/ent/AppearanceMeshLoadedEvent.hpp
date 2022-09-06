#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace ent { 
struct AppearanceMeshLoadedEvent : red::Event
{
    static constexpr const char* NAME = "entAppearanceMeshLoadedEvent";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk40[0x88 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(AppearanceMeshLoadedEvent, 0x88);
} // namespace ent
} // namespace RED4ext

// clang-format on
