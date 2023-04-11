#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EntityReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/ISceneManagerNodeType.hpp>

namespace RED4ext
{
namespace quest
{
struct SetTier3Params_NodeType : quest::ISceneManagerNodeType
{
    static constexpr const char* NAME = "questSetTier3Params_NodeType";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk38[0x3C - 0x38]; // 38
    float yawLeftLimit; // 3C
    float yawRightLimit; // 40
    float pitchUpLimit; // 44
    float pitchDownLimit; // 48
    float yawSpeedMultiplier; // 4C
    float pitchSpeedMultiplier; // 50
    uint8_t unk54[0x58 - 0x54]; // 54
    game::EntityReference objectRef; // 58
    CName slotName; // 90
    Vector3 offsetPos; // 98
    float rotationTime; // A4
    bool rotateHeadOnly; // A8
    bool usePlayerWorkspot; // A9
    bool useEnterAnim; // AA
    bool useExitAnim; // AB
    uint8_t unkAC[0xB0 - 0xAC]; // AC
};
RED4EXT_ASSERT_SIZE(SetTier3Params_NodeType, 0xB0);
} // namespace quest
using questSetTier3Params_NodeType = quest::SetTier3Params_NodeType;
} // namespace RED4ext

// clang-format on
