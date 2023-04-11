#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/interactions/vis/IVisualizerDefinition.hpp>

namespace RED4ext
{
namespace game::interactions::vis { struct IVisualizerTimeProvider; }

namespace game::interactions::vis
{
struct DialogVisualizerDefinition : game::interactions::vis::IVisualizerDefinition
{
    static constexpr const char* NAME = "gameinteractionsvisDialogVisualizerDefinition";
    static constexpr const char* ALIAS = NAME;

    CString displayNameOverride; // 48
    bool useLookAt; // 68
    uint8_t unk69[0x6C - 0x69]; // 69
    bool disableAfterSelectingChoice; // 6C
    uint8_t unk6D[0x70 - 0x6D]; // 6D
    Handle<game::interactions::vis::IVisualizerTimeProvider> timeProvider; // 70
    uint8_t hubPriority; // 80
    uint8_t unk81[0xA8 - 0x81]; // 81
};
RED4EXT_ASSERT_SIZE(DialogVisualizerDefinition, 0xA8);
} // namespace game::interactions::vis
using gameinteractionsvisDialogVisualizerDefinition = game::interactions::vis::DialogVisualizerDefinition;
} // namespace RED4ext

// clang-format on
