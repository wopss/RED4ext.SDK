#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/IPrereq_Record.hpp>

namespace RED4ext
{
namespace game::data
{
struct NPCTypePrereq_Record : game::data::IPrereq_Record
{
    static constexpr const char* NAME = "gamedataNPCTypePrereq_Record";
    static constexpr const char* ALIAS = "NPCTypePrereq_Record";

    uint8_t unk58[0x70 - 0x58]; // 58
};
RED4EXT_ASSERT_SIZE(NPCTypePrereq_Record, 0x70);
} // namespace game::data
using gamedataNPCTypePrereq_Record = game::data::NPCTypePrereq_Record;
using NPCTypePrereq_Record = game::data::NPCTypePrereq_Record;
} // namespace RED4ext

// clang-format on
