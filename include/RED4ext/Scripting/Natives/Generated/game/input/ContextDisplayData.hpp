#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/input/ActionDisplayData.hpp>

namespace RED4ext
{
namespace game::input
{
struct ContextDisplayData
{
    static constexpr const char* NAME = "gameinputContextDisplayData";
    static constexpr const char* ALIAS = "ContextDisplayData";

    CName name; // 00
    DynArray<game::input::ActionDisplayData> actions; // 08
};
RED4EXT_ASSERT_SIZE(ContextDisplayData, 0x18);
} // namespace game::input
using gameinputContextDisplayData = game::input::ContextDisplayData;
using ContextDisplayData = game::input::ContextDisplayData;
} // namespace RED4ext

// clang-format on
