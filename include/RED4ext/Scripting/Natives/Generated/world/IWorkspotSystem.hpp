#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/IRuntimeSystem.hpp>

namespace RED4ext
{
namespace world
{
struct IWorkspotSystem : world::IRuntimeSystem
{
    static constexpr const char* NAME = "worldIWorkspotSystem";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(IWorkspotSystem, 0x48);
} // namespace world
using worldIWorkspotSystem = world::IWorkspotSystem;
} // namespace RED4ext

// clang-format on
