#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game::ui { struct SideScrollerMiniGameStateAdvanced; }

namespace game::ui
{
struct OnMiniGameStateUpdateEventAdvanced : red::Event
{
    static constexpr const char* NAME = "gameuiOnMiniGameStateUpdateEventAdvanced";
    static constexpr const char* ALIAS = "MiniGameStateUpdateEventAdvanced";

    Handle<game::ui::SideScrollerMiniGameStateAdvanced> gameState; // 40
    DynArray<CName> propertyNames; // 50
};
RED4EXT_ASSERT_SIZE(OnMiniGameStateUpdateEventAdvanced, 0x60);
} // namespace game::ui
using gameuiOnMiniGameStateUpdateEventAdvanced = game::ui::OnMiniGameStateUpdateEventAdvanced;
using MiniGameStateUpdateEventAdvanced = game::ui::OnMiniGameStateUpdateEventAdvanced;
} // namespace RED4ext

// clang-format on
