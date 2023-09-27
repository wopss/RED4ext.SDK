#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/Node.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/QuestType.hpp>

namespace RED4ext
{
namespace world
{
struct StaticQuestMarkerNode : world::Node
{
    static constexpr const char* NAME = "worldStaticQuestMarkerNode";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk38[0x48 - 0x38]; // 38
    world::QuestType questType; // 48
    uint8_t unk49[0x50 - 0x49]; // 49
    CString questLabel; // 50
    float questMarkerHeight; // 70
    uint8_t unk74[0x78 - 0x74]; // 74
    CName mapFilteringTag; // 78
};
RED4EXT_ASSERT_SIZE(StaticQuestMarkerNode, 0x80);
} // namespace world
using worldStaticQuestMarkerNode = world::StaticQuestMarkerNode;
} // namespace RED4ext

// clang-format on
