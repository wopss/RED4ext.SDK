#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/Types/generated/Transform.hpp>

namespace RED4ext
{
namespace ent { 
struct ColliderComponentShape : ISerializable
{
    static constexpr const char* NAME = "entColliderComponentShape";
    static constexpr const char* ALIAS = NAME;

    Transform localToBody; // 30
};
RED4EXT_ASSERT_SIZE(ColliderComponentShape, 0x50);
} // namespace ent
} // namespace RED4ext
