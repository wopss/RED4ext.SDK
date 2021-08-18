#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/events/HitEvent.hpp>

namespace RED4ext
{
namespace game { struct Object; }

namespace game::events { 
struct CoverHitEvent : game::events::HitEvent
{
    static constexpr const char* NAME = "gameeventsCoverHitEvent";
    static constexpr const char* ALIAS = "gameCoverHitEvent";

    WeakHandle<game::Object> cover; // E0
};
RED4EXT_ASSERT_SIZE(CoverHitEvent, 0xF0);
} // namespace game::events
using gameCoverHitEvent = game::events::CoverHitEvent;
} // namespace RED4ext
