#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector4.hpp>

namespace RED4ext
{
struct IScriptable;
namespace ent { struct Entity; }

namespace ink { 
struct ScreenProjectionData
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
};
RED4EXT_ASSERT_SIZE(ScreenProjectionData, 0x60);
} // namespace ink
} // namespace RED4ext
