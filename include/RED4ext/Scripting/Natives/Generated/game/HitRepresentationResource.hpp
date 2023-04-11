#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/CResource.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/HitRepresentationVisualTaggedOverride.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/HitShapeContainer.hpp>

namespace RED4ext
{
namespace game
{
struct HitRepresentationResource : CResource
{
    static constexpr const char* NAME = "gameHitRepresentationResource";
    static constexpr const char* ALIAS = "HitRepresentationResource";

    DynArray<game::HitShapeContainer> representations; // 40
    DynArray<game::HitRepresentationVisualTaggedOverride> overrides; // 50
};
RED4EXT_ASSERT_SIZE(HitRepresentationResource, 0x60);
} // namespace game
using gameHitRepresentationResource = game::HitRepresentationResource;
using HitRepresentationResource = game::HitRepresentationResource;
} // namespace RED4ext

// clang-format on
