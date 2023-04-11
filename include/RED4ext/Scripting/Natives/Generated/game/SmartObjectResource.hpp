#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/CResource.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/BodyTypeAnimationDefinition.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/SmartObjectGate.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/SmartObjectType.hpp>

namespace RED4ext
{
namespace game
{
struct SmartObjectResource : CResource
{
    static constexpr const char* NAME = "gameSmartObjectResource";
    static constexpr const char* ALIAS = NAME;

    DynArray<game::SmartObjectGate> entryPoints; // 40
    DynArray<game::SmartObjectGate> exitPoints; // 50
    DynArray<game::BodyTypeAnimationDefinition> bodyTypes; // 60
    DynArray<game::SmartObjectGate> loopAnimations; // 70
    game::SmartObjectType type; // 80
    uint8_t unk84[0x88 - 0x84]; // 84
};
RED4EXT_ASSERT_SIZE(SmartObjectResource, 0x88);
} // namespace game
using gameSmartObjectResource = game::SmartObjectResource;
} // namespace RED4ext

// clang-format on
