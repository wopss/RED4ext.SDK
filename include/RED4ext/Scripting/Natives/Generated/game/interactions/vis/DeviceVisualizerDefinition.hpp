#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/interactions/vis/IVisualizerDefinition.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/interactions/vis/InteractionType.hpp>

namespace RED4ext
{
namespace game::interactions::vis { struct IVisualizerTimeProvider; }

namespace game::interactions::vis { 
struct DeviceVisualizerDefinition : game::interactions::vis::IVisualizerDefinition
{
    static constexpr const char* NAME = "gameinteractionsvisDeviceVisualizerDefinition";
    static constexpr const char* ALIAS = NAME;

    game::interactions::vis::InteractionType interactionType; // 48
    uint8_t unk49[0x50 - 0x49]; // 49
    CString displayNameOverride; // 50
    bool isDynamic; // 70
    bool useDefaultActionMapping; // 71
    bool createMappin; // 72
    uint8_t unk73[0x78 - 0x73]; // 73
    Handle<game::interactions::vis::IVisualizerTimeProvider> timeProvider; // 78
};
RED4EXT_ASSERT_SIZE(DeviceVisualizerDefinition, 0x88);
} // namespace game::interactions::vis
} // namespace RED4ext
