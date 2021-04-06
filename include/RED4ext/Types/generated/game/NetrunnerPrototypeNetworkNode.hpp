#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/game/Object.hpp>

namespace RED4ext
{
namespace game { 
struct NetrunnerPrototypeNetworkNode : game::Object
{
    static constexpr const char* NAME = "gameNetrunnerPrototypeNetworkNode";
    static constexpr const char* ALIAS = "NetrunnerPrototypeNetworkNode";

    uint8_t unk228[0x238 - 0x228]; // 228
    int8_t colorIndex; // 238
    uint8_t unk239[0x240 - 0x239]; // 239
};
RED4EXT_ASSERT_SIZE(NetrunnerPrototypeNetworkNode, 0x240);
} // namespace game
using NetrunnerPrototypeNetworkNode = game::NetrunnerPrototypeNetworkNode;
} // namespace RED4ext
