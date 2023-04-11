#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/EAIAttitude.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ScanningState.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/NPCHighLevelState.hpp>

namespace RED4ext
{
namespace game { struct Object; }

namespace game::ui
{
struct NPCNextToTheCrosshair
{
    static constexpr const char* NAME = "gameuiNPCNextToTheCrosshair";
    static constexpr const char* ALIAS = "NPCNextToTheCrosshair";

    WeakHandle<game::Object> npc; // 00
    CString name; // 10
    int32_t currentHealth; // 30
    int32_t maximumHealth; // 34
    int32_t currentCyberwarePct; // 38
    int32_t level; // 3C
    int32_t quickHackUpload; // 40
    EAIAttitude attitude; // 44
    game::ScanningState scanningState; // 48
    bool isTagged; // 4C
    uint8_t unk4D[0x50 - 0x4D]; // 4D
    game::data::NPCHighLevelState highLevelState; // 50
    bool canSeePlayer; // 54
    bool playerDetectionAboveZero; // 55
    bool playerDetectionAtMax; // 56
    uint8_t unk57[0x58 - 0x57]; // 57
};
RED4EXT_ASSERT_SIZE(NPCNextToTheCrosshair, 0x58);
} // namespace game::ui
using gameuiNPCNextToTheCrosshair = game::ui::NPCNextToTheCrosshair;
using NPCNextToTheCrosshair = game::ui::NPCNextToTheCrosshair;
} // namespace RED4ext

// clang-format on
