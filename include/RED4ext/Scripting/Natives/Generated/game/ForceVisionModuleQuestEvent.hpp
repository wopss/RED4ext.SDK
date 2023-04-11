#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game
{
struct ForceVisionModuleQuestEvent : red::Event
{
    static constexpr const char* NAME = "gameForceVisionModuleQuestEvent";
    static constexpr const char* ALIAS = NAME;

    CName moduleName; // 40
    DynArray<CName> meshComponentNames; // 48
};
RED4EXT_ASSERT_SIZE(ForceVisionModuleQuestEvent, 0x58);
} // namespace game
using gameForceVisionModuleQuestEvent = game::ForceVisionModuleQuestEvent;
} // namespace RED4ext

// clang-format on
