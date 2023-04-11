#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/ISerializable.hpp>

namespace RED4ext
{
namespace game::ui { struct BaseUIData; }

namespace game::ui
{
struct UIGameState : ISerializable
{
    static constexpr const char* NAME = "gameuiUIGameState";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk30[0x38 - 0x30]; // 30
    DynArray<Handle<game::ui::BaseUIData>> uiData; // 38
};
RED4EXT_ASSERT_SIZE(UIGameState, 0x48);
} // namespace game::ui
using gameuiUIGameState = game::ui::UIGameState;
} // namespace RED4ext

// clang-format on
