#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/ColliderComponentShape.hpp>

namespace RED4ext
{
namespace ent { 
struct ColliderComponentCapsule : ent::ColliderComponentShape
{
    static constexpr const char* NAME = "entColliderComponentCapsule";
    static constexpr const char* ALIAS = NAME;

    float radius; // 50
    float height; // 54
    uint8_t unk58[0x60 - 0x58]; // 58
};
RED4EXT_ASSERT_SIZE(ColliderComponentCapsule, 0x60);
} // namespace ent
} // namespace RED4ext
