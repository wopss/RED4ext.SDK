#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/IVisualComponent.hpp>

namespace RED4ext
{
namespace ent { struct EffectDesc; }

namespace ent
{
struct __declspec(align(0x10)) EffectSpawnerComponent : ent::IVisualComponent
{
    static constexpr const char* NAME = "entEffectSpawnerComponent";
    static constexpr const char* ALIAS = NAME;

    DynArray<Handle<ent::EffectDesc>> effectDescs; // 140
    uint8_t unk150[0x230 - 0x150]; // 150
};
RED4EXT_ASSERT_SIZE(EffectSpawnerComponent, 0x230);
} // namespace ent
using entEffectSpawnerComponent = ent::EffectSpawnerComponent;
} // namespace RED4ext

// clang-format on
