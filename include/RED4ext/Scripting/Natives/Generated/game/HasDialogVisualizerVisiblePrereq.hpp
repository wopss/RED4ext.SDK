#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IPrereq.hpp>

namespace RED4ext
{
namespace game
{
struct HasDialogVisualizerVisiblePrereq : game::IPrereq
{
    static constexpr const char* NAME = "gameHasDialogVisualizerVisiblePrereq";
    static constexpr const char* ALIAS = "HasDialogVisualizerVisiblePrereq";

    uint8_t unk40[0x48 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(HasDialogVisualizerVisiblePrereq, 0x48);
} // namespace game
using gameHasDialogVisualizerVisiblePrereq = game::HasDialogVisualizerVisiblePrereq;
using HasDialogVisualizerVisiblePrereq = game::HasDialogVisualizerVisiblePrereq;
} // namespace RED4ext

// clang-format on
