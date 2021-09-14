#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/IPlacedComponent.hpp>

namespace RED4ext
{
namespace game::influence { 
struct HeatAgentComponent : ent::IPlacedComponent
{
    static constexpr const char* NAME = "gameinfluenceHeatAgentComponent";
    static constexpr const char* ALIAS = "HeatAgentComponent";

    uint8_t unk120[0x180 - 0x120]; // 120
};
RED4EXT_ASSERT_SIZE(HeatAgentComponent, 0x180);
} // namespace game::influence
using HeatAgentComponent = game::influence::HeatAgentComponent;
} // namespace RED4ext
