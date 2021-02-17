#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/ent/ColliderComponentShape.hpp>

namespace RED4ext
{
namespace ent { 
struct ColliderComponentSphere : ent::ColliderComponentShape
{
    static constexpr const char* NAME = "entColliderComponentSphere";
    static constexpr const char* ALIAS = NAME;

    float radius; // 50
    uint8_t unk54[0x60 - 0x54]; // 54
};
RED4EXT_ASSERT_SIZE(ColliderComponentSphere, 0x60);
} // namespace ent
} // namespace RED4ext
