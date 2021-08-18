#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EffectExecutor.hpp>

namespace RED4ext
{
namespace game { struct IFinisherScenario; }

namespace game { 
struct EffectExecutor_Finisher : game::EffectExecutor
{
    static constexpr const char* NAME = "gameEffectExecutor_Finisher";
    static constexpr const char* ALIAS = NAME;

    DynArray<Handle<game::IFinisherScenario>> finisherScenarios; // 48
    bool alwaysUseEntryAnims; // 58
    bool allowCameraMovement; // 59
    uint8_t unk5A[0x60 - 0x5A]; // 5A
};
RED4EXT_ASSERT_SIZE(EffectExecutor_Finisher, 0x60);
} // namespace game
} // namespace RED4ext
