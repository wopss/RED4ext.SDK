#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/ITriggerAreaNotiferInstance.hpp>

namespace RED4ext
{
namespace ent
{
struct TriggerNotifier_EntityInstance : world::ITriggerAreaNotiferInstance
{
    static constexpr const char* NAME = "entTriggerNotifier_EntityInstance";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk58[0x60 - 0x58]; // 58
};
RED4EXT_ASSERT_SIZE(TriggerNotifier_EntityInstance, 0x60);
} // namespace ent
using entTriggerNotifier_EntityInstance = ent::TriggerNotifier_EntityInstance;
} // namespace RED4ext

// clang-format on
