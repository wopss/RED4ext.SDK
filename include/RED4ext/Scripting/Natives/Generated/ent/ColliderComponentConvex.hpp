#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/ColliderComponentShape.hpp>

namespace RED4ext
{
struct CMesh;

namespace ent { 
struct ColliderComponentConvex : ent::ColliderComponentShape
{
    static constexpr const char* NAME = "entColliderComponentConvex";
    static constexpr const char* ALIAS = NAME;

    Ref<CMesh> mesh; // 50
    uint8_t unk68[0x70 - 0x68]; // 68
};
RED4EXT_ASSERT_SIZE(ColliderComponentConvex, 0x70);
} // namespace ent
} // namespace RED4ext
