#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Types/SimpleTypes.hpp>
#include <RED4ext/Types/generated/ent/IComponent.hpp>
#include <RED4ext/Types/generated/ent/VisualControllerComponentForcedLodDistance.hpp>
#include <RED4ext/Types/generated/ent/VisualControllerDependency.hpp>

namespace RED4ext
{
struct CMesh;
namespace appearance { struct CookedAppearanceData; }

namespace ent { 
struct VisualControllerComponent : ent::IComponent
{
    static constexpr const char* NAME = "entVisualControllerComponent";
    static constexpr const char* ALIAS = NAME;

    Ref<CMesh> meshProxy; // 90
    DynArray<ent::VisualControllerDependency> appearanceDependency; // A8
    RaRef<appearance::CookedAppearanceData> cookedAppearanceData; // B8
    uint8_t unkC0[0xF0 - 0xC0]; // C0
    ent::VisualControllerComponentForcedLodDistance forcedLodDistance; // F0
    uint8_t unkF1[0x108 - 0xF1]; // F1
};
RED4EXT_ASSERT_SIZE(VisualControllerComponent, 0x108);
} // namespace ent
} // namespace RED4ext
