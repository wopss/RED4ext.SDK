#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/GrenadeDeliveryMethod_Record.hpp>

namespace RED4ext
{
namespace game::data
{
struct StickyGDM_Record : game::data::GrenadeDeliveryMethod_Record
{
    static constexpr const char* NAME = "gamedataStickyGDM_Record";
    static constexpr const char* ALIAS = "StickyGDM_Record";

};
RED4EXT_ASSERT_SIZE(StickyGDM_Record, 0xA0);
} // namespace game::data
using gamedataStickyGDM_Record = game::data::StickyGDM_Record;
using StickyGDM_Record = game::data::StickyGDM_Record;
} // namespace RED4ext

// clang-format on
