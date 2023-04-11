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
struct PreloadFX_NodeTypeParams
{
    static constexpr const char* NAME = "questPreloadFX_NodeTypeParams";
    static constexpr const char* ALIAS = NAME;

    game::EntityReference objectRef; // 00
    CName effectName; // 38
    bool isPlayer; // 40
    bool preload; // 41
    uint8_t unk42[0x48 - 0x42]; // 42
};
RED4EXT_ASSERT_SIZE(PreloadFX_NodeTypeParams, 0x48);
} // namespace quest
using questPreloadFX_NodeTypeParams = quest::PreloadFX_NodeTypeParams;
} // namespace RED4ext

// clang-format on
