#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/WorldPosition.hpp>

namespace RED4ext
{
namespace ent { struct Entity; }

namespace AI
{
struct PositionSpec
{
    static constexpr const char* NAME = "AIPositionSpec";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk00[0x8 - 0x0]; // 0
    WeakHandle<ent::Entity> entity; // 08
    WorldPosition worldPosition; // 18
    uint8_t unk24[0x28 - 0x24]; // 24
};
RED4EXT_ASSERT_SIZE(PositionSpec, 0x28);
} // namespace AI
using AIPositionSpec = AI::PositionSpec;
} // namespace RED4ext

// clang-format on
