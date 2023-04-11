#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/PerformerId.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/SceneEvent.hpp>

namespace RED4ext
{
namespace scn { struct IGameplayActionData; }

namespace scn
{
struct GameplayActionEvent : scn::SceneEvent
{
    static constexpr const char* NAME = "scnGameplayActionEvent";
    static constexpr const char* ALIAS = NAME;

    scn::PerformerId performer; // 58
    uint8_t unk5C[0x60 - 0x5C]; // 5C
    Handle<scn::IGameplayActionData> gameplayActionData; // 60
};
RED4EXT_ASSERT_SIZE(GameplayActionEvent, 0x70);
} // namespace scn
using scnGameplayActionEvent = scn::GameplayActionEvent;
} // namespace RED4ext

// clang-format on
