#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/IOrientationProvider.hpp>

namespace RED4ext
{
namespace ent
{
struct FuncOrientationProvider : ent::IOrientationProvider
{
    static constexpr const char* NAME = "entFuncOrientationProvider";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk40[0x80 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(FuncOrientationProvider, 0x80);
} // namespace ent
using entFuncOrientationProvider = ent::FuncOrientationProvider;
} // namespace RED4ext

// clang-format on
