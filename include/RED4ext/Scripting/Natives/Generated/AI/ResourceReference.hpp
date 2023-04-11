#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/LibTreeCTreeReference.hpp>

namespace RED4ext
{
namespace AI
{
struct ResourceReference : LibTreeCTreeReference
{
    static constexpr const char* NAME = "AIResourceReference";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(ResourceReference, 0x70);
} // namespace AI
using AIResourceReference = AI::ResourceReference;
} // namespace RED4ext

// clang-format on
