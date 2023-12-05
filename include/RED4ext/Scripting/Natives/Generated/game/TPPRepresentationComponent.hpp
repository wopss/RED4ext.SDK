#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/IComponent.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/FppRepDetachedObjectInfo.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/TppRepAttachedObjectInfo.hpp>

namespace RED4ext
{
namespace game
{
struct TPPRepresentationComponent : ent::IComponent
{
    static constexpr const char* NAME = "gameTPPRepresentationComponent";
    static constexpr const char* ALIAS = NAME;

    DynArray<game::FppRepDetachedObjectInfo> detachedObjectInfo; // 90
    DynArray<game::TppRepAttachedObjectInfo> attachedObjectInfo; // A0
    DynArray<TweakDBID> affectedAppearanceSlots; // B0
    uint8_t unkC0[0x1D0 - 0xC0]; // C0
};
RED4EXT_ASSERT_SIZE(TPPRepresentationComponent, 0x1D0);
} // namespace game
using gameTPPRepresentationComponent = game::TPPRepresentationComponent;
} // namespace RED4ext

// clang-format on
