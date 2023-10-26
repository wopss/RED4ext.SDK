#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector4.hpp>

namespace RED4ext
{
struct IScriptable;
namespace ent { struct Entity; }

namespace ink
{
struct __declspec(align(0x10)) ScreenProjectionData
{
    static constexpr const char* NAME = "inkScreenProjectionData";
    static constexpr const char* ALIAS = NAME;

    WeakHandle<ent::Entity> entity; // 00
    CName slotComponentName; // 10
    CName slotName; // 18
    CName slotFallbackName; // 20
    uint8_t unk28[0x30 - 0x28]; // 28
    Vector4 staticWorldPosition; // 30
    Vector4 fixedWorldOffset; // 40
    WeakHandle<IScriptable> userData; // 50
    bool adjustWithDistance; // 60
    uint8_t unk61[0x64 - 0x61]; // 61
    Vector3 extraOffsetAtMaxDistance; // 64
};
RED4EXT_ASSERT_SIZE(ScreenProjectionData, 0x70);
} // namespace ink
using inkScreenProjectionData = ink::ScreenProjectionData;
} // namespace RED4ext

// clang-format on
