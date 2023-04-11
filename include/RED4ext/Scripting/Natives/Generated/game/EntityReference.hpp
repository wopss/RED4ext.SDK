#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EntityReferenceType.hpp>

namespace RED4ext
{
namespace game
{
struct EntityReference
{
    static constexpr const char* NAME = "gameEntityReference";
    static constexpr const char* ALIAS = "EntityReference";

    NodeRef reference; // 00
    DynArray<CName> names; // 08
    CName dynamicEntityUniqueName; // 18
    CName slotName; // 20
    CName sceneActorContextName; // 28
    game::EntityReferenceType type; // 30
    uint8_t unk31[0x38 - 0x31]; // 31
};
RED4EXT_ASSERT_SIZE(EntityReference, 0x38);
} // namespace game
using gameEntityReference = game::EntityReference;
using EntityReference = game::EntityReference;
} // namespace RED4ext

// clang-format on
