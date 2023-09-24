#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IPrereq.hpp>

namespace RED4ext
{
namespace game
{
struct EntitiesWithStatusEffectPrereq : game::IPrereq
{
    static constexpr const char* NAME = "gameEntitiesWithStatusEffectPrereq";
    static constexpr const char* ALIAS = "EntitiesWithStatusEffectPrereq";

    uint8_t unk40[0x70 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(EntitiesWithStatusEffectPrereq, 0x70);
} // namespace game
using gameEntitiesWithStatusEffectPrereq = game::EntitiesWithStatusEffectPrereq;
using EntitiesWithStatusEffectPrereq = game::EntitiesWithStatusEffectPrereq;
} // namespace RED4ext

// clang-format on
