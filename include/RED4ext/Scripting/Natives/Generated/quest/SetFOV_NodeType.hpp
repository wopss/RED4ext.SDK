#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/ISceneManagerNodeType.hpp>

namespace RED4ext
{
namespace quest
{
struct SetFOV_NodeType : quest::ISceneManagerNodeType
{
    static constexpr const char* NAME = "questSetFOV_NodeType";
    static constexpr const char* ALIAS = NAME;

    float FOV; // 38
    uint8_t unk3C[0x40 - 0x3C]; // 3C
};
RED4EXT_ASSERT_SIZE(SetFOV_NodeType, 0x40);
} // namespace quest
using questSetFOV_NodeType = quest::SetFOV_NodeType;
} // namespace RED4ext

// clang-format on
