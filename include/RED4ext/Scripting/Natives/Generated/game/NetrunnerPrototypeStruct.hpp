#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
namespace ent { struct EntityTemplate; }

namespace game
{
struct NetrunnerPrototypeStruct
{
    static constexpr const char* NAME = "gameNetrunnerPrototypeStruct";
    static constexpr const char* ALIAS = NAME;

    CName key; // 00
    RaRef<ent::EntityTemplate> entityTemplate; // 08
};
RED4EXT_ASSERT_SIZE(NetrunnerPrototypeStruct, 0x10);
} // namespace game
using gameNetrunnerPrototypeStruct = game::NetrunnerPrototypeStruct;
} // namespace RED4ext

// clang-format on
