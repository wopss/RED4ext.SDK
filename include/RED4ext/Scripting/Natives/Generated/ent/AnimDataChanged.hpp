#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace ent
{
struct AnimDataChanged : red::Event
{
    static constexpr const char* NAME = "entAnimDataChanged";
    static constexpr const char* ALIAS = "AnimDataChanged";

    uint8_t unk40[0x48 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(AnimDataChanged, 0x48);
} // namespace ent
using entAnimDataChanged = ent::AnimDataChanged;
using AnimDataChanged = ent::AnimDataChanged;
} // namespace RED4ext

// clang-format on
