#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Types/generated/game/Object.hpp>
#include <RED4ext/Types/generated/game/ui/DistrictTriggerData.hpp>

namespace RED4ext
{
namespace game::ui { 
struct WorldMapGameObject : game::Object
{
    static constexpr const char* NAME = "gameuiWorldMapGameObject";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk230[0x398 - 0x230]; // 230
    DynArray<game::ui::DistrictTriggerData> districts; // 398
};
RED4EXT_ASSERT_SIZE(WorldMapGameObject, 0x3A8);
} // namespace game::ui
} // namespace RED4ext
