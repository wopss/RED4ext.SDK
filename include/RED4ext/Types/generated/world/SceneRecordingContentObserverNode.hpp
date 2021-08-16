#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Types/generated/world/Node.hpp>
#include <RED4ext/Types/generated/world/SceneRecordingNodeFilter.hpp>

namespace RED4ext
{
namespace world { 
struct SceneRecordingContentObserverNode : world::Node
{
    static constexpr const char* NAME = "worldSceneRecordingContentObserverNode";
    static constexpr const char* ALIAS = NAME;

    world::SceneRecordingNodeFilter filter; // 38
};
RED4EXT_ASSERT_SIZE(SceneRecordingContentObserverNode, 0x68);
} // namespace world
} // namespace RED4ext
