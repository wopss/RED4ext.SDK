#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
namespace scn
{
struct VoicetagId
{
    static constexpr const char* NAME = "scnVoicetagId";
    static constexpr const char* ALIAS = NAME;

    CRUID id; // 00
};
RED4EXT_ASSERT_SIZE(VoicetagId, 0x8);
} // namespace scn
using scnVoicetagId = scn::VoicetagId;
} // namespace RED4ext

// clang-format on
