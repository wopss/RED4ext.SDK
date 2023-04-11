#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EntityReference.hpp>

namespace RED4ext
{
namespace quest
{
struct ShowDialogIndicator_NodeTypeParams
{
    static constexpr const char* NAME = "questShowDialogIndicator_NodeTypeParams";
    static constexpr const char* ALIAS = NAME;

    game::EntityReference objectRef; // 00
    bool show; // 38
    uint8_t unk39[0x40 - 0x39]; // 39
};
RED4EXT_ASSERT_SIZE(ShowDialogIndicator_NodeTypeParams, 0x40);
} // namespace quest
using questShowDialogIndicator_NodeTypeParams = quest::ShowDialogIndicator_NodeTypeParams;
} // namespace RED4ext

// clang-format on
