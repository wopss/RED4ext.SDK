#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/AreaShapeNode.hpp>

namespace RED4ext
{
namespace game { struct EffectTriggerEffectDesc; }

namespace game { 
struct EffectTriggerNode : world::AreaShapeNode
{
    static constexpr const char* NAME = "gameEffectTriggerNode";
    static constexpr const char* ALIAS = NAME;

    DynArray<Handle<game::EffectTriggerEffectDesc>> effectDescs; // 60
};
RED4EXT_ASSERT_SIZE(EffectTriggerNode, 0x70);
} // namespace game
} // namespace RED4ext
