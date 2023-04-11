#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/ContextualActorName.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/VoicetagId.hpp>

namespace RED4ext
{
namespace scn
{
struct FindEntityInContextParams
{
    static constexpr const char* NAME = "scnFindEntityInContextParams";
    static constexpr const char* ALIAS = NAME;

    scn::ContextualActorName contextualName; // 00
    uint8_t unk04[0x8 - 0x4]; // 4
    scn::VoicetagId voiceVagId; // 08
    CName contextActorName; // 10
    TweakDBID specRecordId; // 18
    bool forceMaxVisibility; // 20
    uint8_t unk21[0x28 - 0x21]; // 21
};
RED4EXT_ASSERT_SIZE(FindEntityInContextParams, 0x28);
} // namespace scn
using scnFindEntityInContextParams = scn::FindEntityInContextParams;
} // namespace RED4ext

// clang-format on
