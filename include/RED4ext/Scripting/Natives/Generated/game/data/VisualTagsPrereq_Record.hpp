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
struct VisualTagsPrereq_Record : game::data::IPrereq_Record
{
    static constexpr const char* NAME = "gamedataVisualTagsPrereq_Record";
    static constexpr const char* ALIAS = "VisualTagsPrereq_Record";

    uint8_t unk58[0x70 - 0x58]; // 58
};
RED4EXT_ASSERT_SIZE(VisualTagsPrereq_Record, 0x70);
} // namespace game::data
using gamedataVisualTagsPrereq_Record = game::data::VisualTagsPrereq_Record;
using VisualTagsPrereq_Record = game::data::VisualTagsPrereq_Record;
} // namespace RED4ext

// clang-format on
