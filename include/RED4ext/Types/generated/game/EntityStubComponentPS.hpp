#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Types/generated/Quaternion.hpp>
#include <RED4ext/Types/generated/Vector3.hpp>
#include <RED4ext/Types/generated/game/CommunityID.hpp>
#include <RED4ext/Types/generated/game/ComponentPS.hpp>

namespace RED4ext
{
namespace game { 
struct EntityStubComponentPS : game::ComponentPS
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
    uint8_t unkC8[0xD0 - 0xC8]; // C8
};
RED4EXT_ASSERT_SIZE(EntityStubComponentPS, 0xD0);
} // namespace game
} // namespace RED4ext
