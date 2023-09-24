#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/AIRecord_Record.hpp>

namespace RED4ext
{
namespace game::data
{
struct AIActionSmartComposite_Record : game::data::AIRecord_Record
{
    static constexpr const char* NAME = "gamedataAIActionSmartComposite_Record";
    static constexpr const char* ALIAS = "AIActionSmartComposite_Record";

    uint8_t unk48[0xA8 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(AIActionSmartComposite_Record, 0xA8);
} // namespace game::data
using gamedataAIActionSmartComposite_Record = game::data::AIActionSmartComposite_Record;
using AIActionSmartComposite_Record = game::data::AIActionSmartComposite_Record;
} // namespace RED4ext

// clang-format on
