#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/Effector_Record.hpp>

namespace RED4ext
{
namespace game::data { 
struct ForceDismembermentEffector_Record : game::data::Effector_Record
{
    static constexpr const char* NAME = "gamedataForceDismembermentEffector_Record";
    static constexpr const char* ALIAS = "ForceDismembermentEffector_Record";

    uint8_t unk58[0x70 - 0x58]; // 58
};
RED4EXT_ASSERT_SIZE(ForceDismembermentEffector_Record, 0x70);
} // namespace game::data
using ForceDismembermentEffector_Record = game::data::ForceDismembermentEffector_Record;
} // namespace RED4ext
