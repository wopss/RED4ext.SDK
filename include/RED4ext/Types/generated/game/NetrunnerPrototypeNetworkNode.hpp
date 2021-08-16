#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Types/generated/game/Object.hpp>

namespace RED4ext
{
namespace game { 
struct NetrunnerPrototypeNetworkNode : game::Object
{
    static constexpr const char* NAME = "gameNetrunnerPrototypeNetworkNode";
    static constexpr const char* ALIAS = "NetrunnerPrototypeNetworkNode";

    uint8_t unk230[0x240 - 0x230]; // 230
    int8_t colorIndex; // 240
    uint8_t unk241[0x248 - 0x241]; // 241
};
RED4EXT_ASSERT_SIZE(NetrunnerPrototypeNetworkNode, 0x248);
} // namespace game
using NetrunnerPrototypeNetworkNode = game::NetrunnerPrototypeNetworkNode;
} // namespace RED4ext
