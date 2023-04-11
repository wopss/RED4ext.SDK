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
struct PhysicalBodyInterface : IScriptable
{
    static constexpr const char* NAME = "entPhysicalBodyInterface";
    static constexpr const char* ALIAS = "PhysicalBodyInterface";

    uint8_t unk40[0x48 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(PhysicalBodyInterface, 0x48);
} // namespace ent
using entPhysicalBodyInterface = ent::PhysicalBodyInterface;
using PhysicalBodyInterface = ent::PhysicalBodyInterface;
} // namespace RED4ext

// clang-format on
