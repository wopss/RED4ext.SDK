#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/dismemberment/WoundTypeE.hpp>
#include <RED4ext/Scripting/Natives/Generated/physics/RagdollBodyPartE.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/ICharacterManagerCombat_NodeSubType.hpp>

namespace RED4ext
{
namespace quest
{
struct CharacterManagerCombat_Kill : quest::ICharacterManagerCombat_NodeSubType
{
    static constexpr const char* NAME = "questCharacterManagerCombat_Kill";
    static constexpr const char* ALIAS = NAME;

    bool noAnimation; // 70
    bool noRagdoll; // 71
    bool skipDefeatedState; // 72
    bool doDismemberment; // 73
    float dismembermentStrenght; // 74
    physics::RagdollBodyPartE bodyPart; // 78
    ent::dismemberment::WoundTypeE woundType; // 7C
    uint8_t unk7E[0x80 - 0x7E]; // 7E
};
RED4EXT_ASSERT_SIZE(CharacterManagerCombat_Kill, 0x80);
} // namespace quest
using questCharacterManagerCombat_Kill = quest::CharacterManagerCombat_Kill;
} // namespace RED4ext

// clang-format on
