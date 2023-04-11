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
struct WorkspotItemEvent : red::Event
{
    static constexpr const char* NAME = "entWorkspotItemEvent";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk40[0x48 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(WorkspotItemEvent, 0x48);
} // namespace ent
using entWorkspotItemEvent = ent::WorkspotItemEvent;
} // namespace RED4ext

// clang-format on
