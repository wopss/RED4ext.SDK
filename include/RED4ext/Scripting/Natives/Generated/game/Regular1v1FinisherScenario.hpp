#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IFinisherScenario.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/Regular1v1FinisherScenarioPivotSetting.hpp>

namespace RED4ext
{
namespace work { struct WorkspotResource; }

namespace game { 
struct Regular1v1FinisherScenario : game::IFinisherScenario
{
    static constexpr const char* NAME = "gameRegular1v1FinisherScenario";
    static constexpr const char* ALIAS = NAME;

    RaRef<work::WorkspotResource> attackerWorkspot; // 30
    RaRef<work::WorkspotResource> targetWorkspot; // 38
    CName syncAnimSlotName; // 40
    float targetPlaybackDelay; // 48
    float targetBlendTime; // 4C
    float attackerPlaybackDelay; // 50
    float attackerBlendTime; // 54
    game::Regular1v1FinisherScenarioPivotSetting pivotSettings; // 58
    bool attackerIsMaster; // 59
    uint8_t unk5A[0x60 - 0x5A]; // 5A
};
RED4EXT_ASSERT_SIZE(Regular1v1FinisherScenario, 0x60);
} // namespace game
} // namespace RED4ext
