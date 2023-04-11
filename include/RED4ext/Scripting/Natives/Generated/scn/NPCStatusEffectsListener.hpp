#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IStatusEffectListener.hpp>

namespace RED4ext
{
namespace scn
{
struct NPCStatusEffectsListener : game::IStatusEffectListener
{
    static constexpr const char* NAME = "scnNPCStatusEffectsListener";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk40[0x58 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(NPCStatusEffectsListener, 0x58);
} // namespace scn
using scnNPCStatusEffectsListener = scn::NPCStatusEffectsListener;
} // namespace RED4ext

// clang-format on
