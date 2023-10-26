#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector4.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/EntityID.hpp>

namespace RED4ext
{
namespace ent { struct Entity; }
namespace ent { struct IComponent; }

namespace game::targeting
{
struct __declspec(align(0x10)) SystemHitInfo
{
    static constexpr const char* NAME = "gametargetingSystemHitInfo";
    static constexpr const char* ALIAS = "TargetHitInfo";

    uint64_t queryMask; // 00
    ent::EntityID entityId; // 08
    WeakHandle<ent::Entity> entity; // 10
    WeakHandle<ent::IComponent> component; // 20
    Vector4 aimStartPosition; // 30
    Vector4 closestHitPosition; // 40
    uint8_t unk50[0x5C - 0x50]; // 50
    bool isTransparent; // 5C
    uint8_t unk5D[0x60 - 0x5D]; // 5D
};
RED4EXT_ASSERT_SIZE(SystemHitInfo, 0x60);
} // namespace game::targeting
using gametargetingSystemHitInfo = game::targeting::SystemHitInfo;
using TargetHitInfo = game::targeting::SystemHitInfo;
} // namespace RED4ext

// clang-format on
