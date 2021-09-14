#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace ent { struct Entity; }
namespace game { struct StaticAreaShapeComponent; }

namespace AI { 
struct ApproachingAreaResponseEvent : red::Event
{
    static constexpr const char* NAME = "AIApproachingAreaResponseEvent";
    static constexpr const char* ALIAS = "AIApproachingAreaResponseEvent";

    WeakHandle<ent::Entity> sender; // 40
    WeakHandle<game::StaticAreaShapeComponent> areaComponent; // 50
    bool isPassingThrough; // 60
    uint8_t unk61[0x68 - 0x61]; // 61
};
RED4EXT_ASSERT_SIZE(ApproachingAreaResponseEvent, 0x68);
} // namespace AI
} // namespace RED4ext
