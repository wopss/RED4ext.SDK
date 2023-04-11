#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IFinisherScenario.hpp>

namespace RED4ext
{
namespace work { struct WorkspotResource; }

namespace game
{
struct ExistingWorkspotFinisherScenario : game::IFinisherScenario
{
    static constexpr const char* NAME = "gameExistingWorkspotFinisherScenario";
    static constexpr const char* ALIAS = NAME;

    RaRef<work::WorkspotResource> playerWorkspot; // 30
    CName syncAnimSlotName; // 38
    float playbackDelay; // 40
    float blendTime; // 44
};
RED4EXT_ASSERT_SIZE(ExistingWorkspotFinisherScenario, 0x48);
} // namespace game
using gameExistingWorkspotFinisherScenario = game::ExistingWorkspotFinisherScenario;
} // namespace RED4ext

// clang-format on
