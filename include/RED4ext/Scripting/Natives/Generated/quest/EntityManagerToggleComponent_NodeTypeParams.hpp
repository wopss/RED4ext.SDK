#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EntityReference.hpp>

namespace RED4ext
{
namespace quest
{
struct EntityManagerToggleComponent_NodeTypeParams
{
    static constexpr const char* NAME = "questEntityManagerToggleComponent_NodeTypeParams";
    static constexpr const char* ALIAS = NAME;

    game::EntityReference objectRef; // 00
    bool isPlayer; // 38
    uint8_t unk39[0x40 - 0x39]; // 39
    CName componentName; // 40
    bool enable; // 48
    uint8_t unk49[0x50 - 0x49]; // 49
};
RED4EXT_ASSERT_SIZE(EntityManagerToggleComponent_NodeTypeParams, 0x50);
} // namespace quest
using questEntityManagerToggleComponent_NodeTypeParams = quest::EntityManagerToggleComponent_NodeTypeParams;
} // namespace RED4ext

// clang-format on
