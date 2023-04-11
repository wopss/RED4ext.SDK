#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EntityReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/MountingSlotRole.hpp>

namespace RED4ext
{
namespace quest
{
struct MountedObjectInfo : ISerializable
{
    static constexpr const char* NAME = "questMountedObjectInfo";
    static constexpr const char* ALIAS = NAME;

    bool isPlayer; // 30
    uint8_t unk31[0x38 - 0x31]; // 31
    game::EntityReference ref; // 38
    bool onMount; // 70
    uint8_t unk71[0x74 - 0x71]; // 71
    game::MountingSlotRole role; // 74
    bool isFirst; // 78
    uint8_t unk79[0x80 - 0x79]; // 79
};
RED4EXT_ASSERT_SIZE(MountedObjectInfo, 0x80);
} // namespace quest
using questMountedObjectInfo = quest::MountedObjectInfo;
} // namespace RED4ext

// clang-format on
