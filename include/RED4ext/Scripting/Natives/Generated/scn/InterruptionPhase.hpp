#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace scn {
enum class InterruptionPhase : int8_t
{
    WaitForInterruption = 0,
    WaitForInterrupted = 1,
    Interrupted = 2,
    ClearTier = 3,
    FadeOutLines = 4,
    InterruptionVoiceset = 5,
    WaitForReturn = 6,
    InstallTalkInteraction = 7,
    WaitForTalkInteraction = 8,
    ReturnVoiceset = 9,
    ReturnAnswerVoiceset = 10,
    ShowLines = 11,
    SyncTime = 12,
    RestoreTier = 13,
    Returned = 14,
    FadeOutLookAt = 15,
    FadeInLookAt = 16,
    InterruptSignal = 17,
    PostInterruptSignalTimeDelay = 18,
    ReturnSignal = 19,
    PostReturnSignalTimeDelay = 20,
    ProcessTalkInteraction = 21,
    ClearCommands = 22,
};
} // namespace scn
using scnInterruptionPhase = scn::InterruptionPhase;
} // namespace RED4ext

// clang-format on
