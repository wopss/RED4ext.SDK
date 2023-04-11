#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>

namespace RED4ext
{
namespace prv
{
struct FunctionalTestsTrigger : IScriptable
{
    static constexpr const char* NAME = "prvFunctionalTestsTrigger";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk40[0xD0 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(FunctionalTestsTrigger, 0xD0);
} // namespace prv
using prvFunctionalTestsTrigger = prv::FunctionalTestsTrigger;
} // namespace RED4ext

// clang-format on
