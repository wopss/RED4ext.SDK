#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/CResource.hpp>

namespace RED4ext
{
namespace game
{
struct LocationResource : CResource
{
    static constexpr const char* NAME = "gameLocationResource";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk40[0x70 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(LocationResource, 0x70);
} // namespace game
using gameLocationResource = game::LocationResource;
} // namespace RED4ext

// clang-format on
