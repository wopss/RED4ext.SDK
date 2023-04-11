#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/ResourceReference.hpp>

namespace RED4ext
{
namespace AI
{
struct DefAI : AI::ResourceReference
{
    static constexpr const char* NAME = "AIDefAI";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(DefAI, 0x70);
} // namespace AI
using AIDefAI = AI::DefAI;
} // namespace RED4ext

// clang-format on
