#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ISubtitleHandlerSystem.hpp>

namespace RED4ext
{
namespace game::ui
{
struct SubtitleHandlerSystem : game::ISubtitleHandlerSystem
{
    static constexpr const char* NAME = "gameuiSubtitleHandlerSystem";
    static constexpr const char* ALIAS = "SubtitleHandlerSystem";

    uint8_t unk48[0x90 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(SubtitleHandlerSystem, 0x90);
} // namespace game::ui
using gameuiSubtitleHandlerSystem = game::ui::SubtitleHandlerSystem;
using SubtitleHandlerSystem = game::ui::SubtitleHandlerSystem;
} // namespace RED4ext

// clang-format on
