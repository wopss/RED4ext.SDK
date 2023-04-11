#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>

namespace RED4ext
{
namespace ink
{
struct ILayerSystem : IScriptable
{
    static constexpr const char* NAME = "inkILayerSystem";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(ILayerSystem, 0x40);
} // namespace ink
using inkILayerSystem = ink::ILayerSystem;
} // namespace RED4ext

// clang-format on
