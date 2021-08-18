#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/IPlacedComponent.hpp>

namespace RED4ext
{
namespace ent { 
struct TransformComponent : ent::IPlacedComponent
{
    static constexpr const char* NAME = "entTransformComponent";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(TransformComponent, 0x120);
} // namespace ent
} // namespace RED4ext
