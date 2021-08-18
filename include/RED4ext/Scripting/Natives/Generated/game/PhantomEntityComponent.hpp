#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/IComponent.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/PhantomEntityParameters.hpp>

namespace RED4ext
{
namespace game { struct EffectComponentBinding; }

namespace game { 
struct PhantomEntityComponent : ent::IComponent
{
    static constexpr const char* NAME = "gamePhantomEntityComponent";
    static constexpr const char* ALIAS = NAME;

    game::PhantomEntityParameters params; // 90
    Handle<game::EffectComponentBinding> effectBinding; // C0
};
RED4EXT_ASSERT_SIZE(PhantomEntityComponent, 0xD0);
} // namespace game
} // namespace RED4ext
