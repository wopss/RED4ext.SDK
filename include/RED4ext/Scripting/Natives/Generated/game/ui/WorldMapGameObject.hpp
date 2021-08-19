#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/Object.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/DistrictTriggerData.hpp>

namespace RED4ext
{
namespace game::ui { 
struct WorldMapGameObject : game::Object
{
    static constexpr const char* NAME = "gameuiWorldMapGameObject";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk240[0x3A8 - 0x240]; // 240
    DynArray<game::ui::DistrictTriggerData> districts; // 3A8
};
RED4EXT_ASSERT_SIZE(WorldMapGameObject, 0x3B8);
} // namespace game::ui
} // namespace RED4ext
