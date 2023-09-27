#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game { struct Object; }

namespace sense
{
struct VisibilityPartsEvent : red::Event
{
    static constexpr const char* NAME = "senseVisibilityPartsEvent";
    static constexpr const char* ALIAS = "SenseVisibilityPartsEvent";

    WeakHandle<game::Object> target; // 40
    bool isPrimaryVisible; // 50
    bool isSecondaryVisible; // 51
    uint8_t unk52[0x58 - 0x52]; // 52
    CName description; // 58
};
RED4EXT_ASSERT_SIZE(VisibilityPartsEvent, 0x60);
} // namespace sense
using senseVisibilityPartsEvent = sense::VisibilityPartsEvent;
using SenseVisibilityPartsEvent = sense::VisibilityPartsEvent;
} // namespace RED4ext

// clang-format on
