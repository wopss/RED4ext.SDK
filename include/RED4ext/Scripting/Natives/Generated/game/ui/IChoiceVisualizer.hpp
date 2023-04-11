#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/ISerializable.hpp>

namespace RED4ext
{
namespace game::ui
{
struct IChoiceVisualizer : ISerializable
{
    static constexpr const char* NAME = "gameuiIChoiceVisualizer";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(IChoiceVisualizer, 0x30);
} // namespace game::ui
using gameuiIChoiceVisualizer = game::ui::IChoiceVisualizer;
} // namespace RED4ext

// clang-format on
