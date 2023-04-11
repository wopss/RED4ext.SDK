#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/INodeInstance.hpp>

namespace RED4ext
{
namespace world
{
struct StaticQuestMarkerNodeInstance : world::INodeInstance
{
    static constexpr const char* NAME = "worldStaticQuestMarkerNodeInstance";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(StaticQuestMarkerNodeInstance, 0x90);
} // namespace world
using worldStaticQuestMarkerNodeInstance = world::StaticQuestMarkerNodeInstance;
} // namespace RED4ext

// clang-format on
