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
struct TriggerNotifier_ScriptInstance : world::ITriggerAreaNotiferInstance
{
    static constexpr const char* NAME = "entTriggerNotifier_ScriptInstance";
    static constexpr const char* ALIAS = "TriggerNotifier_ScriptInstance";

    uint8_t unk58[0x68 - 0x58]; // 58
};
RED4EXT_ASSERT_SIZE(TriggerNotifier_ScriptInstance, 0x68);
} // namespace ent
using entTriggerNotifier_ScriptInstance = ent::TriggerNotifier_ScriptInstance;
using TriggerNotifier_ScriptInstance = ent::TriggerNotifier_ScriptInstance;
} // namespace RED4ext

// clang-format on
