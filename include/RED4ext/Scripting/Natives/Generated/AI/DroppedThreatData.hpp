#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector4.hpp>

namespace RED4ext
{
namespace ent { struct Entity; }

namespace AI
{
struct __declspec(align(0x10)) DroppedThreatData
{
    static constexpr const char* NAME = "AIDroppedThreatData";
    static constexpr const char* ALIAS = "DroppedThreatData";

    uint8_t unk00[0x40 - 0x0]; // 0
    WeakHandle<ent::Entity> threat; // 40
    Vector4 position; // 50
    uint8_t unk60[0x70 - 0x60]; // 60
};
RED4EXT_ASSERT_SIZE(DroppedThreatData, 0x70);
} // namespace AI
using AIDroppedThreatData = AI::DroppedThreatData;
using DroppedThreatData = AI::DroppedThreatData;
} // namespace RED4ext

// clang-format on
