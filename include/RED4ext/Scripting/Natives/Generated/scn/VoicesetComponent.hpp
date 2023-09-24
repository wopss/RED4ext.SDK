#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/Component.hpp>

namespace RED4ext
{
namespace scn
{
struct VoicesetComponent : game::Component
{
    static constexpr const char* NAME = "scnVoicesetComponent";
    static constexpr const char* ALIAS = "VoicesetComponent";

    uint8_t unkA8[0x220 - 0xA8]; // A8
    CName combatVoSettingsName; // 220
    uint8_t unk228[0x2F8 - 0x228]; // 228
};
RED4EXT_ASSERT_SIZE(VoicesetComponent, 0x2F8);
} // namespace scn
using scnVoicesetComponent = scn::VoicesetComponent;
using VoicesetComponent = scn::VoicesetComponent;
} // namespace RED4ext

// clang-format on
