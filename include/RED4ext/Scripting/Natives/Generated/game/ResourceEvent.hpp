#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/CallbackSystemEvent.hpp>

namespace RED4ext
{
struct CResource;

namespace game
{
struct ResourceEvent : game::CallbackSystemEvent
{
    static constexpr const char* NAME = "gameResourceEvent";
    static constexpr const char* ALIAS = "ResourceEvent";

    Handle<CResource> resource; // 48
};
RED4EXT_ASSERT_SIZE(ResourceEvent, 0x58);
} // namespace game
using gameResourceEvent = game::ResourceEvent;
using ResourceEvent = game::ResourceEvent;
} // namespace RED4ext

// clang-format on
