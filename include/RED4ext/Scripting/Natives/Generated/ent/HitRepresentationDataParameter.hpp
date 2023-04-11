#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/EntityParameter.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/HitRepresentationOverride.hpp>

namespace RED4ext
{
namespace ent
{
struct HitRepresentationDataParameter : ent::EntityParameter
{
    static constexpr const char* NAME = "entHitRepresentationDataParameter";
    static constexpr const char* ALIAS = NAME;

    DynArray<game::HitRepresentationOverride> hitRepresentationOverrides; // 30
};
RED4EXT_ASSERT_SIZE(HitRepresentationDataParameter, 0x40);
} // namespace ent
using entHitRepresentationDataParameter = ent::HitRepresentationDataParameter;
} // namespace RED4ext

// clang-format on
