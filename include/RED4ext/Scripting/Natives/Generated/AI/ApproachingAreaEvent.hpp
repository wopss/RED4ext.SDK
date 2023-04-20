#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/AIEvent.hpp>

namespace RED4ext
{
namespace ent { struct Entity; }
namespace game { struct StaticAreaShapeComponent; }

namespace AI
{
struct ApproachingAreaEvent : AI::AIEvent
{
    static constexpr const char* NAME = "AIApproachingAreaEvent";
    static constexpr const char* ALIAS = NAME;

    bool isApproachCancellation; // 50
    uint8_t unk51[0x58 - 0x51]; // 51
    WeakHandle<game::StaticAreaShapeComponent> areaComponent; // 58
    WeakHandle<ent::Entity> responseTarget; // 68
};
RED4EXT_ASSERT_SIZE(ApproachingAreaEvent, 0x78);
} // namespace AI
using AIApproachingAreaEvent = AI::ApproachingAreaEvent;
} // namespace RED4ext

// clang-format on
