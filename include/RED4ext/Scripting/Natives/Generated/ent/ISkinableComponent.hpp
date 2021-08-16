#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/IPlacedComponent.hpp>

namespace RED4ext
{
namespace ent { 
struct ISkinableComponent : ent::IPlacedComponent
{
    static constexpr const char* NAME = "entISkinableComponent";
    static constexpr const char* ALIAS = "ISkinableComponent";

    uint8_t unk120[0x130 - 0x120]; // 120
};
RED4EXT_ASSERT_SIZE(ISkinableComponent, 0x130);
} // namespace ent
using ISkinableComponent = ent::ISkinableComponent;
} // namespace RED4ext
