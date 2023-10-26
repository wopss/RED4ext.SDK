#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/IPlacedComponent.hpp>

namespace RED4ext
{
namespace game
{
struct __declspec(align(0x10)) EntityStubComponentPlacedProxy : ent::IPlacedComponent
{
    static constexpr const char* NAME = "gameEntityStubComponentPlacedProxy";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk120[0x130 - 0x120]; // 120
};
RED4EXT_ASSERT_SIZE(EntityStubComponentPlacedProxy, 0x130);
} // namespace game
using gameEntityStubComponentPlacedProxy = game::EntityStubComponentPlacedProxy;
} // namespace RED4ext

// clang-format on
