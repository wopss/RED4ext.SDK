#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/ObjectId.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>

namespace RED4ext
{
namespace game { struct Object; }

namespace AI::behavior::tweak
{
struct TargetLocation
{
    static constexpr const char* NAME = "AIbehaviortweakTargetLocation";
    static constexpr const char* ALIAS = NAME;

    WeakHandle<game::Object> object; // 00
    Vector3 position; // 10
    Vector3 speed; // 1C
    AI::ObjectId coverId; // 28
    bool hasPosition; // 30
    bool hasSpeed; // 31
    uint8_t unk32[0x38 - 0x32]; // 32
};
RED4EXT_ASSERT_SIZE(TargetLocation, 0x38);
} // namespace AI::behavior::tweak
using AIbehaviortweakTargetLocation = AI::behavior::tweak::TargetLocation;
} // namespace RED4ext

// clang-format on
