#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/ChoiceCaptionPart_Record.hpp>

namespace RED4ext
{
namespace game::data { 
struct ChoiceCaptionIconPart_Record : game::data::ChoiceCaptionPart_Record
{
    static constexpr const char* NAME = "gamedataChoiceCaptionIconPart_Record";
    static constexpr const char* ALIAS = "ChoiceCaptionIconPart_Record";

    uint8_t unk50[0x60 - 0x50]; // 50
};
RED4EXT_ASSERT_SIZE(ChoiceCaptionIconPart_Record, 0x60);
} // namespace game::data
using ChoiceCaptionIconPart_Record = game::data::ChoiceCaptionIconPart_Record;
} // namespace RED4ext
