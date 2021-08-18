#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/Effector_Record.hpp>

namespace RED4ext
{
namespace game::data { 
struct ApplyStatusEffectEffector_Record : game::data::Effector_Record
{
    static constexpr const char* NAME = "gamedataApplyStatusEffectEffector_Record";
    static constexpr const char* ALIAS = "ApplyStatusEffectEffector_Record";

    uint8_t unk58[0x68 - 0x58]; // 58
};
RED4EXT_ASSERT_SIZE(ApplyStatusEffectEffector_Record, 0x68);
} // namespace game::data
using ApplyStatusEffectEffector_Record = game::data::ApplyStatusEffectEffector_Record;
} // namespace RED4ext
