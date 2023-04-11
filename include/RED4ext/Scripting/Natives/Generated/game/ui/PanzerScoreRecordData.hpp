#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
namespace game::ui
{
struct PanzerScoreRecordData
{
    static constexpr const char* NAME = "gameuiPanzerScoreRecordData";
    static constexpr const char* ALIAS = "PanzerScoreRecordData";

    CString name; // 00
    uint32_t score; // 20
    uint8_t unk24[0x28 - 0x24]; // 24
};
RED4EXT_ASSERT_SIZE(PanzerScoreRecordData, 0x28);
} // namespace game::ui
using gameuiPanzerScoreRecordData = game::ui::PanzerScoreRecordData;
using PanzerScoreRecordData = game::ui::PanzerScoreRecordData;
} // namespace RED4ext

// clang-format on
