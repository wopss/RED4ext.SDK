#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/TriggerAreaNodeInstance.hpp>

namespace RED4ext
{
namespace game
{
struct __declspec(align(0x10)) CyberspaceBoundaryNodeInstance : world::TriggerAreaNodeInstance
{
    static constexpr const char* NAME = "gameCyberspaceBoundaryNodeInstance";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk100[0x110 - 0x100]; // 100
};
RED4EXT_ASSERT_SIZE(CyberspaceBoundaryNodeInstance, 0x110);
} // namespace game
using gameCyberspaceBoundaryNodeInstance = game::CyberspaceBoundaryNodeInstance;
} // namespace RED4ext

// clang-format on
