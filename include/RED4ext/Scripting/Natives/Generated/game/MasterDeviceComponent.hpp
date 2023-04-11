#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/Component.hpp>

namespace RED4ext
{
namespace game::device { struct Clearance; }

namespace game
{
struct MasterDeviceComponent : game::Component
{
    static constexpr const char* NAME = "gameMasterDeviceComponent";
    static constexpr const char* ALIAS = "MasterDeviceComponent";

    uint8_t unkA8[0xC8 - 0xA8]; // A8
    Handle<game::device::Clearance> clearance; // C8
};
RED4EXT_ASSERT_SIZE(MasterDeviceComponent, 0xD8);
} // namespace game
using gameMasterDeviceComponent = game::MasterDeviceComponent;
using MasterDeviceComponent = game::MasterDeviceComponent;
} // namespace RED4ext

// clang-format on
