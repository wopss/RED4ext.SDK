#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/WorldTransform.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/IComponent.hpp>

namespace RED4ext
{
namespace ent { struct ITransformBinding; }

namespace ent { 
struct IPlacedComponent : ent::IComponent
{
    static constexpr const char* NAME = "entIPlacedComponent";
    static constexpr const char* ALIAS = "IPlacedComponent";

    Handle<ent::ITransformBinding> parentTransform; // 90
    uint8_t unkA0[0xC0 - 0xA0]; // A0
    WorldTransform localTransform; // C0
    uint8_t unkE0[0x120 - 0xE0]; // E0
};
RED4EXT_ASSERT_SIZE(IPlacedComponent, 0x120);
} // namespace ent
using IPlacedComponent = ent::IPlacedComponent;
} // namespace RED4ext
