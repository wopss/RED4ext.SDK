#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game::events
{
struct EvaluateLootQualityEvent : red::Event
{
    static constexpr const char* NAME = "gameeventsEvaluateLootQualityEvent";
    static constexpr const char* ALIAS = "gameEvaluateLootQualityEvent";

};
RED4EXT_ASSERT_SIZE(EvaluateLootQualityEvent, 0x40);
} // namespace game::events
using gameeventsEvaluateLootQualityEvent = game::events::EvaluateLootQualityEvent;
using gameEvaluateLootQualityEvent = game::events::EvaluateLootQualityEvent;
} // namespace RED4ext

// clang-format on
