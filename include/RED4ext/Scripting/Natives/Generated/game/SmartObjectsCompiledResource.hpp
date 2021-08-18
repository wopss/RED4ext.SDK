#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/Box.hpp>
#include <RED4ext/Scripting/Natives/Generated/res/StreamedResource.hpp>

namespace RED4ext
{
namespace game { struct CompiledNodes; }
namespace game { struct SmartObjectAnimationDatabase; }
namespace game { struct SmartObjectMembership; }
namespace game { struct SmartObjectPropertyDictionary; }
namespace game { struct SmartObjectTransformDictionary; }
namespace game { struct SmartObjectTransformSequenceDictionary; }

namespace game { 
struct SmartObjectsCompiledResource : res::StreamedResource
{
    static constexpr const char* NAME = "gameSmartObjectsCompiledResource";
    static constexpr const char* ALIAS = NAME;

    Handle<game::SmartObjectAnimationDatabase> animationDatabase; // 40
    Handle<game::CompiledNodes> compiledNodesData; // 50
    Handle<game::SmartObjectTransformDictionary> transformDictionary; // 60
    Handle<game::SmartObjectPropertyDictionary> propertyDictionary; // 70
    Handle<game::SmartObjectTransformSequenceDictionary> transformSequenceDictionary; // 80
    Handle<game::SmartObjectMembership> soMembership; // 90
    Box localBoundingBox; // A0
};
RED4EXT_ASSERT_SIZE(SmartObjectsCompiledResource, 0xC0);
} // namespace game
} // namespace RED4ext
