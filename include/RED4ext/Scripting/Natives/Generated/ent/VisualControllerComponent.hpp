#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/ForcedLodDistance.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/IComponent.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/VisualControllerDependency.hpp>

namespace RED4ext
{
struct CMesh;
namespace appearance { struct CookedAppearanceData; }

namespace ent
{
struct VisualControllerComponent : ent::IComponent
{
    static constexpr const char* NAME = "entVisualControllerComponent";
    static constexpr const char* ALIAS = NAME;

    Ref<CMesh> meshProxy; // 90
    DynArray<ent::VisualControllerDependency> appearanceDependency; // A8
    RaRef<appearance::CookedAppearanceData> cookedAppearanceData; // B8
    uint8_t unkC0[0xF0 - 0xC0]; // C0
    ent::ForcedLodDistance forcedLodDistance; // F0
    uint8_t unkF1[0x128 - 0xF1]; // F1
};
RED4EXT_ASSERT_SIZE(VisualControllerComponent, 0x128);
} // namespace ent
using entVisualControllerComponent = ent::VisualControllerComponent;
} // namespace RED4ext

// clang-format on
