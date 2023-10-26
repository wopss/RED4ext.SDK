#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/Quaternion.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/CommunityID.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ComponentPS.hpp>

namespace RED4ext
{
namespace game
{
struct __declspec(align(0x10)) EntityStubComponentPS : game::ComponentPS
{
    static constexpr const char* NAME = "gameEntityStubComponentPS";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk68[0x70 - 0x68]; // 68
    Quaternion entityLocalRotation; // 70
    Vector3 entityLocalPosition; // 80
    uint8_t unk8C[0xB0 - 0x8C]; // 8C
    game::CommunityID spawnerId; // B0
    CName ownerCommunityEntryName; // B8
    CName selectedAppearanceName; // C0
    CName selectedColorVariantName; // C8
    uint8_t unkD0[0xE0 - 0xD0]; // D0
};
RED4EXT_ASSERT_SIZE(EntityStubComponentPS, 0xE0);
} // namespace game
using gameEntityStubComponentPS = game::EntityStubComponentPS;
} // namespace RED4ext

// clang-format on
