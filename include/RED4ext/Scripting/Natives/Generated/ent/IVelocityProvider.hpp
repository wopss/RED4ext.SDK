#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>

namespace RED4ext
{
namespace ent
{
struct IVelocityProvider : IScriptable
{
    static constexpr const char* NAME = "entIVelocityProvider";
    static constexpr const char* ALIAS = "IVelocityProvider";

};
RED4EXT_ASSERT_SIZE(IVelocityProvider, 0x40);
} // namespace ent
using entIVelocityProvider = ent::IVelocityProvider;
using IVelocityProvider = ent::IVelocityProvider;
} // namespace RED4ext

// clang-format on
