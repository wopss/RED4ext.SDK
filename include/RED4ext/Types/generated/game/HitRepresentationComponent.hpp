#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Types/SimpleTypes.hpp>
#include <RED4ext/Types/generated/ent/SlotComponent.hpp>
#include <RED4ext/Types/generated/game/HitRepresentationOverride.hpp>
#include <RED4ext/Types/generated/game/HitShapeBVH.hpp>
#include <RED4ext/Types/generated/game/HitShapeContainer.hpp>

namespace RED4ext
{
namespace game { struct HitRepresentationResource; }

namespace game { 
struct HitRepresentationComponent : ent::SlotComponent
{
    static constexpr const char* NAME = "gameHitRepresentationComponent";
    static constexpr const char* ALIAS = "HitRepresentationComponent";

    uint8_t unk190[0x198 - 0x190]; // 190
    RaRef<game::HitRepresentationResource> resource; // 198
    uint8_t unk1A0[0x1B8 - 0x1A0]; // 1A0
    DynArray<game::HitRepresentationOverride> appearanceOverrides; // 1B8
    DynArray<game::HitShapeContainer> representations; // 1C8
    uint8_t unk1D8[0x1F8 - 0x1D8]; // 1D8
    CName physicsMaterial; // 1F8
    bool useResourceData; // 200
    uint8_t unk201[0x220 - 0x201]; // 201
    game::HitShapeBVH bvhRoot; // 220
    uint8_t unk2B0[0x340 - 0x2B0]; // 2B0
};
RED4EXT_ASSERT_SIZE(HitRepresentationComponent, 0x340);
} // namespace game
using HitRepresentationComponent = game::HitRepresentationComponent;
} // namespace RED4ext
