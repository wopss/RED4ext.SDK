#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/PhysicalTriggerComponent.hpp>

namespace RED4ext
{
namespace ent { 
struct TriggerComponent : ent::PhysicalTriggerComponent
{
    static constexpr const char* NAME = "entTriggerComponent";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk180[0x190 - 0x180]; // 180
};
RED4EXT_ASSERT_SIZE(TriggerComponent, 0x190);
} // namespace ent
} // namespace RED4ext
