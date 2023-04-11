#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
namespace game::ui { struct IChoiceVisualizer; }

namespace game::interactions
{
struct CSharedDataDefinition
{
    static constexpr const char* NAME = "gameinteractionsCSharedDataDefinition";
    static constexpr const char* ALIAS = NAME;

    DynArray<CString> defaultChoices; // 00
    Handle<game::ui::IChoiceVisualizer> visualizer; // 10
};
RED4EXT_ASSERT_SIZE(CSharedDataDefinition, 0x20);
} // namespace game::interactions
using gameinteractionsCSharedDataDefinition = game::interactions::CSharedDataDefinition;
} // namespace RED4ext

// clang-format on
