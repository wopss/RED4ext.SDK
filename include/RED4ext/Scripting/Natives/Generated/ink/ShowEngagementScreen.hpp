#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>

namespace RED4ext
{
namespace ink
{
struct ShowEngagementScreen : IScriptable
{
    static constexpr const char* NAME = "inkShowEngagementScreen";
    static constexpr const char* ALIAS = "ShowEngagementScreen";

    bool show; // 40
    uint8_t unk41[0x48 - 0x41]; // 41
};
RED4EXT_ASSERT_SIZE(ShowEngagementScreen, 0x48);
} // namespace ink
using inkShowEngagementScreen = ink::ShowEngagementScreen;
using ShowEngagementScreen = ink::ShowEngagementScreen;
} // namespace RED4ext

// clang-format on
