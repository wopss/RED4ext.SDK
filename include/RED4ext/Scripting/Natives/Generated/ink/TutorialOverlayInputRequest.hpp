#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace ink
{
struct TutorialOverlayInputRequest : red::Event
{
    static constexpr const char* NAME = "inkTutorialOverlayInputRequest";
    static constexpr const char* ALIAS = NAME;

    bool isInputRequested; // 40
    uint8_t unk41[0x48 - 0x41]; // 41
};
RED4EXT_ASSERT_SIZE(TutorialOverlayInputRequest, 0x48);
} // namespace ink
using inkTutorialOverlayInputRequest = ink::TutorialOverlayInputRequest;
} // namespace RED4ext

// clang-format on
