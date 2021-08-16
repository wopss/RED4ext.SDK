#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace ent { 
struct RenderOverlayEvent : red::Event
{
    static constexpr const char* NAME = "entRenderOverlayEvent";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk40[0x58 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(RenderOverlayEvent, 0x58);
} // namespace ent
} // namespace RED4ext
