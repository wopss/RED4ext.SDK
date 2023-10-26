#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>
#include <RED4ext/Scripting/Natives/Generated/Transform.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector4.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EquipParam.hpp>

namespace RED4ext
{
namespace game::interactions
{
struct __declspec(align(0x10)) ReactionData : IScriptable
{
    static constexpr const char* NAME = "gameinteractionsReactionData";
    static constexpr const char* ALIAS = "ReactionData";

    CName choiceName; // 40
    float startDuration; // 48
    float endDuration; // 4C
    float interactionDuration; // 50
    uint8_t unk54[0x58 - 0x54]; // 54
    CName interactionType; // 58
    DynArray<game::EquipParam> requiredEquips; // 60
    Transform interactionPoint; // 70
    bool useIK; // 90
    uint8_t unk91[0xA0 - 0x91]; // 91
    Vector4 IKPoint; // A0
};
RED4EXT_ASSERT_SIZE(ReactionData, 0xB0);
} // namespace game::interactions
using gameinteractionsReactionData = game::interactions::ReactionData;
using ReactionData = game::interactions::ReactionData;
} // namespace RED4ext

// clang-format on
