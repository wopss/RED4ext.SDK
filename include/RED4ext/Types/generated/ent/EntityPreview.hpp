#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/ent/Entity.hpp>

namespace RED4ext
{
namespace ent { 
struct EntityPreview : ent::Entity
{
    static constexpr const char* NAME = "entEntityPreview";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk158[0x1B0 - 0x158]; // 158
};
RED4EXT_ASSERT_SIZE(EntityPreview, 0x1B0);
} // namespace ent
} // namespace RED4ext
