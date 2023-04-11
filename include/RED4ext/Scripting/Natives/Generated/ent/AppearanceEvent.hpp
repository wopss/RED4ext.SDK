#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace ent
{
struct AppearanceEvent : red::Event
{
    static constexpr const char* NAME = "entAppearanceEvent";
    static constexpr const char* ALIAS = NAME;

    CName appearanceName; // 40
    CName componentName; // 48
};
RED4EXT_ASSERT_SIZE(AppearanceEvent, 0x50);
} // namespace ent
using entAppearanceEvent = ent::AppearanceEvent;
} // namespace RED4ext

// clang-format on
