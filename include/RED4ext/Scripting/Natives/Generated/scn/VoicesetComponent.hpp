#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/Component.hpp>

namespace RED4ext
{
namespace scn { 
struct VoicesetComponent : game::Component
{
    static constexpr const char* NAME = "scnVoicesetComponent";
    static constexpr const char* ALIAS = "VoicesetComponent";

    uint8_t unkA8[0x258 - 0xA8]; // A8
    CName combatVoSettingsName; // 258
    uint8_t unk260[0x330 - 0x260]; // 260
};
RED4EXT_ASSERT_SIZE(VoicesetComponent, 0x330);
} // namespace scn
using VoicesetComponent = scn::VoicesetComponent;
} // namespace RED4ext
