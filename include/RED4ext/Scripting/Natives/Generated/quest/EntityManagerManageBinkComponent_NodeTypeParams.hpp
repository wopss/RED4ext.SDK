#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/BinkVideoAction.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EntityReference.hpp>

namespace RED4ext
{
namespace quest
{
struct EntityManagerManageBinkComponent_NodeTypeParams
{
    static constexpr const char* NAME = "questEntityManagerManageBinkComponent_NodeTypeParams";
    static constexpr const char* ALIAS = NAME;

    game::EntityReference objectRef; // 00
    CString videoPath; // 38
    game::BinkVideoAction action; // 58
    uint8_t unk59[0x60 - 0x59]; // 59
};
RED4EXT_ASSERT_SIZE(EntityManagerManageBinkComponent_NodeTypeParams, 0x60);
} // namespace quest
using questEntityManagerManageBinkComponent_NodeTypeParams = quest::EntityManagerManageBinkComponent_NodeTypeParams;
} // namespace RED4ext

// clang-format on
