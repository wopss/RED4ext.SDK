#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Types/SimpleTypes.hpp>
#include <RED4ext/Types/generated/ent/IComponent.hpp>
#include <RED4ext/Types/generated/game/FppRepDetachedObjectInfo.hpp>
#include <RED4ext/Types/generated/game/TppRepAttachedObjectInfo.hpp>

namespace RED4ext
{
namespace game { 
struct TPPRepresentationComponent : ent::IComponent
{
    static constexpr const char* NAME = "gameTPPRepresentationComponent";
    static constexpr const char* ALIAS = NAME;

    DynArray<game::FppRepDetachedObjectInfo> detachedObjectInfo; // 90
    DynArray<game::TppRepAttachedObjectInfo> attachedObjectInfo; // A0
    DynArray<TweakDBID> affectedAppearanceSlots; // B0
    uint8_t unkC0[0x190 - 0xC0]; // C0
};
RED4EXT_ASSERT_SIZE(TPPRepresentationComponent, 0x190);
} // namespace game
} // namespace RED4ext
