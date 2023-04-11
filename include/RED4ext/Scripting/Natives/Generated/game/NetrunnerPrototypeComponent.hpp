#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/IComponent.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/NetrunnerPrototypeStruct.hpp>

namespace RED4ext
{
namespace game
{
struct NetrunnerPrototypeComponent : ent::IComponent
{
    static constexpr const char* NAME = "gameNetrunnerPrototypeComponent";
    static constexpr const char* ALIAS = "NetrunnerPrototypeComponent";

    DynArray<game::NetrunnerPrototypeStruct> structs; // 90
    uint8_t unkA0[0x118 - 0xA0]; // A0
};
RED4EXT_ASSERT_SIZE(NetrunnerPrototypeComponent, 0x118);
} // namespace game
using gameNetrunnerPrototypeComponent = game::NetrunnerPrototypeComponent;
using NetrunnerPrototypeComponent = game::NetrunnerPrototypeComponent;
} // namespace RED4ext

// clang-format on
