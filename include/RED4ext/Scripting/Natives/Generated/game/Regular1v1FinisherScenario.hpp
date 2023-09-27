#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/FinisherSyncData.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IFinisherScenario.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/Regular1v1FinisherScenarioPivotSetting.hpp>

namespace RED4ext
{
namespace work { struct WorkspotResource; }

namespace game
{
struct Regular1v1FinisherScenario : game::IFinisherScenario
{
    static constexpr const char* NAME = "gameRegular1v1FinisherScenario";
    static constexpr const char* ALIAS = NAME;

    RaRef<work::WorkspotResource> attackerWorkspot; // 30
    RaRef<work::WorkspotResource> targetWorkspot; // 38
    DynArray<game::FinisherSyncData> syncData; // 40
    float targetPlaybackDelay; // 50
    float targetBlendTime; // 54
    float attackerPlaybackDelay; // 58
    float attackerBlendTime; // 5C
    game::Regular1v1FinisherScenarioPivotSetting pivotSettings; // 60
    bool attackerIsMaster; // 61
    uint8_t unk62[0x68 - 0x62]; // 62
    CName targetSlotNameToAttachAttackerWeaponLeft; // 68
};
RED4EXT_ASSERT_SIZE(Regular1v1FinisherScenario, 0x70);
} // namespace game
using gameRegular1v1FinisherScenario = game::Regular1v1FinisherScenario;
} // namespace RED4ext

// clang-format on
