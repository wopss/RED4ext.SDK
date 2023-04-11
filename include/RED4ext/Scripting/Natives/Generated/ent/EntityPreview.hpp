#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/Entity.hpp>

namespace RED4ext
{
namespace ent
{
struct EntityPreview : ent::Entity
{
    static constexpr const char* NAME = "entEntityPreview";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk160[0x1B8 - 0x160]; // 160
};
RED4EXT_ASSERT_SIZE(EntityPreview, 0x1B8);
} // namespace ent
using entEntityPreview = ent::EntityPreview;
} // namespace RED4ext

// clang-format on
