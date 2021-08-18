#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/IPlacedComponent.hpp>

namespace RED4ext
{
namespace ent { 
struct PlaceholderComponent : ent::IPlacedComponent
{
    static constexpr const char* NAME = "entPlaceholderComponent";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(PlaceholderComponent, 0x120);
} // namespace ent
} // namespace RED4ext
