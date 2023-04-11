#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/Layer.hpp>

namespace RED4ext
{
namespace ink
{
struct FullScreenLayer : ink::Layer
{
    static constexpr const char* NAME = "inkFullScreenLayer";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(FullScreenLayer, 0x150);
} // namespace ink
using inkFullScreenLayer = ink::FullScreenLayer;
} // namespace RED4ext

// clang-format on
