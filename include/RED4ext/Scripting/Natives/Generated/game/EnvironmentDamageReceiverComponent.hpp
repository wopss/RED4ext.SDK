#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/IPlacedComponent.hpp>

namespace RED4ext
{
namespace game { struct EnvironmentDamageReceiverShape; }

namespace game { 
struct EnvironmentDamageReceiverComponent : ent::IPlacedComponent
{
    static constexpr const char* NAME = "gameEnvironmentDamageReceiverComponent";
    static constexpr const char* ALIAS = "EnvironmentDamageReceiverComponent";

    DynArray<Handle<game::EnvironmentDamageReceiverShape>> shapes; // 120
    uint8_t unk130[0x138 - 0x130]; // 130
    float cooldown; // 138
    uint8_t unk13C[0x140 - 0x13C]; // 13C
};
RED4EXT_ASSERT_SIZE(EnvironmentDamageReceiverComponent, 0x140);
} // namespace game
using EnvironmentDamageReceiverComponent = game::EnvironmentDamageReceiverComponent;
} // namespace RED4ext
