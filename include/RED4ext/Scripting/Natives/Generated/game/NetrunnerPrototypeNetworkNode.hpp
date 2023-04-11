#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/Object.hpp>

namespace RED4ext
{
namespace game
{
struct NetrunnerPrototypeNetworkNode : game::Object
{
    static constexpr const char* NAME = "gameNetrunnerPrototypeNetworkNode";
    static constexpr const char* ALIAS = "NetrunnerPrototypeNetworkNode";

    uint8_t unk240[0x250 - 0x240]; // 240
    int8_t colorIndex; // 250
    uint8_t unk251[0x258 - 0x251]; // 251
};
RED4EXT_ASSERT_SIZE(NetrunnerPrototypeNetworkNode, 0x258);
} // namespace game
using gameNetrunnerPrototypeNetworkNode = game::NetrunnerPrototypeNetworkNode;
using NetrunnerPrototypeNetworkNode = game::NetrunnerPrototypeNetworkNode;
} // namespace RED4ext

// clang-format on
