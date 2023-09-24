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
struct SetTargetingQueryRange_NodeType : quest::ISceneManagerNodeType
{
    static constexpr const char* NAME = "questSetTargetingQueryRange_NodeType";
    static constexpr const char* ALIAS = NAME;

    float targetingQueryRange; // 38
    bool resetToDefault; // 3C
    uint8_t unk3D[0x40 - 0x3D]; // 3D
};
RED4EXT_ASSERT_SIZE(SetTargetingQueryRange_NodeType, 0x40);
} // namespace quest
using questSetTargetingQueryRange_NodeType = quest::SetTargetingQueryRange_NodeType;
} // namespace RED4ext

// clang-format on
