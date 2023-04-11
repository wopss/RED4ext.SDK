#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/VoicesetInputToBlock.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ComponentPS.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/NPCHighLevelState.hpp>

namespace RED4ext
{
namespace scn
{
struct VoicesetComponentPS : game::ComponentPS
{
    static constexpr const char* NAME = "scnVoicesetComponentPS";
    static constexpr const char* ALIAS = NAME;

    DynArray<ent::VoicesetInputToBlock> blockedInputs; // 68
    CName voiceTag; // 78
    game::data::NPCHighLevelState NPCHighLevelState; // 80
    uint32_t gruntSetIndex; // 84
    bool areVoicesetLinesEnabled; // 88
    bool areVoicesetGruntsEnabled; // 89
    uint8_t unk8A[0x90 - 0x8A]; // 8A
};
RED4EXT_ASSERT_SIZE(VoicesetComponentPS, 0x90);
} // namespace scn
using scnVoicesetComponentPS = scn::VoicesetComponentPS;
} // namespace RED4ext

// clang-format on
