#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
namespace game::ui
{
struct BaseUIData
{
    static constexpr const char* NAME = "gameuiBaseUIData";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk00[0x30 - 0x0]; // 0
    int64_t id; // 30
};
RED4EXT_ASSERT_SIZE(BaseUIData, 0x38);
} // namespace game::ui
using gameuiBaseUIData = game::ui::BaseUIData;
} // namespace RED4ext

// clang-format on
