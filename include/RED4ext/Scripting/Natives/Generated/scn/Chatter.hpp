#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>

namespace RED4ext
{
namespace scn { struct VoicesetComponent; }

namespace scn
{
struct Chatter
{
    static constexpr const char* NAME = "scnChatter";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk00[0x30 - 0x0]; // 0
    uint16_t id; // 30
    uint8_t unk32[0x38 - 0x32]; // 32
    WeakHandle<scn::VoicesetComponent> voicesetComponent; // 38
    uint8_t unk48[0x50 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(Chatter, 0x50);
} // namespace scn
using scnChatter = scn::Chatter;
} // namespace RED4ext

// clang-format on
