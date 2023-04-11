#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace ent
{
struct AnimEntityToEntityAttachmentEvent : red::Event
{
    static constexpr const char* NAME = "entAnimEntityToEntityAttachmentEvent";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk40[0x58 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(AnimEntityToEntityAttachmentEvent, 0x58);
} // namespace ent
using entAnimEntityToEntityAttachmentEvent = ent::AnimEntityToEntityAttachmentEvent;
} // namespace RED4ext

// clang-format on
