#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/game/ISubtitleHandlerSystem.hpp>

namespace RED4ext
{
namespace game::ui { 
struct SubtitleHandlerSystem : game::ISubtitleHandlerSystem
{
    static constexpr const char* NAME = "gameuiSubtitleHandlerSystem";
    static constexpr const char* ALIAS = "SubtitleHandlerSystem";

    uint8_t unk48[0x70 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(SubtitleHandlerSystem, 0x70);
} // namespace game::ui
using SubtitleHandlerSystem = game::ui::SubtitleHandlerSystem;
} // namespace RED4ext
