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
struct IOrientationProvider : IScriptable
{
    static constexpr const char* NAME = "entIOrientationProvider";
    static constexpr const char* ALIAS = "IOrientationProvider";

};
RED4EXT_ASSERT_SIZE(IOrientationProvider, 0x40);
} // namespace ent
using entIOrientationProvider = ent::IOrientationProvider;
using IOrientationProvider = ent::IOrientationProvider;
} // namespace RED4ext

// clang-format on
