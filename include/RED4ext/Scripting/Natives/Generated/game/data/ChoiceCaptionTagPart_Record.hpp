#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/ChoiceCaptionPart_Record.hpp>

namespace RED4ext
{
namespace game::data
{
struct ChoiceCaptionTagPart_Record : game::data::ChoiceCaptionPart_Record
{
    static constexpr const char* NAME = "gamedataChoiceCaptionTagPart_Record";
    static constexpr const char* ALIAS = "ChoiceCaptionTagPart_Record";

    uint8_t unk58[0x68 - 0x58]; // 58
};
RED4EXT_ASSERT_SIZE(ChoiceCaptionTagPart_Record, 0x68);
} // namespace game::data
using gamedataChoiceCaptionTagPart_Record = game::data::ChoiceCaptionTagPart_Record;
using ChoiceCaptionTagPart_Record = game::data::ChoiceCaptionTagPart_Record;
} // namespace RED4ext

// clang-format on
