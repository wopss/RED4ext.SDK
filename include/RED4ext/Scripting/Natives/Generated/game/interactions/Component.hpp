#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/IPlacedComponent.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/interactions/InteractionDefinitionOverrider.hpp>

namespace RED4ext
{
namespace game::interactions { struct InteractionDescriptorResource; }

namespace game::interactions
{
struct __declspec(align(0x10)) Component : ent::IPlacedComponent
{
    static constexpr const char* NAME = "gameinteractionsComponent";
    static constexpr const char* ALIAS = "InteractionComponent";

    uint8_t unk120[0x148 - 0x120]; // 120
    Ref<game::interactions::InteractionDescriptorResource> definitionResource; // 148
    uint8_t unk160[0x1A0 - 0x160]; // 160
    Vector3 interactionRootOffset; // 1A0
    uint8_t unk1AC[0x1B0 - 0x1AC]; // 1AC
    DynArray<game::interactions::InteractionDefinitionOverrider> layerOverrides; // 1B0
    DynArray<game::interactions::InteractionDefinitionOverrider> layerOverridesTemp; // 1C0
};
RED4EXT_ASSERT_SIZE(Component, 0x1D0);
} // namespace game::interactions
using gameinteractionsComponent = game::interactions::Component;
using InteractionComponent = game::interactions::Component;
} // namespace RED4ext

// clang-format on
