#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IHitRepresentationSystem.hpp>

namespace RED4ext
{
namespace game
{
struct HitRepresentationSystem : game::IHitRepresentationSystem
{
    static constexpr const char* NAME = "gameHitRepresentationSystem";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk48[0x12520 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(HitRepresentationSystem, 0x12520);
} // namespace game
using gameHitRepresentationSystem = game::HitRepresentationSystem;
} // namespace RED4ext

// clang-format on
