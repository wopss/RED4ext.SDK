#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game::audio::events
{
struct NotifyFootstepMaterialContextChanged : red::Event
{
    static constexpr const char* NAME = "gameaudioeventsNotifyFootstepMaterialContextChanged";
    static constexpr const char* ALIAS = "NotifyFootstepMaterialContextChangedEvent";

    CName footwareType; // 40
    CName surfaceFlavourName; // 48
};
RED4EXT_ASSERT_SIZE(NotifyFootstepMaterialContextChanged, 0x50);
} // namespace game::audio::events
using gameaudioeventsNotifyFootstepMaterialContextChanged = game::audio::events::NotifyFootstepMaterialContextChanged;
using NotifyFootstepMaterialContextChangedEvent = game::audio::events::NotifyFootstepMaterialContextChanged;
} // namespace RED4ext

// clang-format on
