#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/ColliderComponentShape.hpp>

namespace RED4ext
{
namespace ent { 
struct ColliderComponentBox : ent::ColliderComponentShape
{
    static constexpr const char* NAME = "entColliderComponentBox";
    static constexpr const char* ALIAS = NAME;

    Vector3 dimensions; // 50
    uint8_t unk5C[0x60 - 0x5C]; // 5C
};
RED4EXT_ASSERT_SIZE(ColliderComponentBox, 0x60);
} // namespace ent
} // namespace RED4ext
