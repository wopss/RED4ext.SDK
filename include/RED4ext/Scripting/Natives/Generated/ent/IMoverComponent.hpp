#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/IComponent.hpp>

namespace RED4ext
{
namespace ent
{
struct IMoverComponent : ent::IComponent
{
    static constexpr const char* NAME = "entIMoverComponent";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(IMoverComponent, 0x90);
} // namespace ent
using entIMoverComponent = ent::IMoverComponent;
} // namespace RED4ext

// clang-format on
