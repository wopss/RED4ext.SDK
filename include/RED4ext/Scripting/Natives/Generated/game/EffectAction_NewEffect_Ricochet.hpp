#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EffectPostAction.hpp>

namespace RED4ext
{
namespace game
{
struct EffectAction_NewEffect_Ricochet : game::EffectPostAction
{
    static constexpr const char* NAME = "gameEffectAction_NewEffect_Ricochet";
    static constexpr const char* ALIAS = NAME;

    CName tagInThisFile; // 40
    float forwardOffset; // 48
    bool childEffect; // 4C
    uint8_t unk4D[0x50 - 0x4D]; // 4D
    CName childEffectTag; // 50
};
RED4EXT_ASSERT_SIZE(EffectAction_NewEffect_Ricochet, 0x58);
} // namespace game
using gameEffectAction_NewEffect_Ricochet = game::EffectAction_NewEffect_Ricochet;
} // namespace RED4ext

// clang-format on
