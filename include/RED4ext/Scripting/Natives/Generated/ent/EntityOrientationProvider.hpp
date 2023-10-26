#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/Quaternion.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/IOrientationProvider.hpp>

namespace RED4ext
{
namespace ent { struct Entity; }
namespace ent { struct SlotComponent; }

namespace ent
{
struct __declspec(align(0x10)) EntityOrientationProvider : ent::IOrientationProvider
{
    static constexpr const char* NAME = "entEntityOrientationProvider";
    static constexpr const char* ALIAS = NAME;

    WeakHandle<ent::SlotComponent> slotComponent; // 40
    int32_t slotId; // 50
    uint8_t unk54[0x58 - 0x54]; // 54
    WeakHandle<ent::Entity> entity; // 58
    uint8_t unk68[0x70 - 0x68]; // 68
    Quaternion orientationEntitySpace; // 70
    uint8_t unk80[0x90 - 0x80]; // 80
};
RED4EXT_ASSERT_SIZE(EntityOrientationProvider, 0x90);
} // namespace ent
using entEntityOrientationProvider = ent::EntityOrientationProvider;
} // namespace RED4ext

// clang-format on
