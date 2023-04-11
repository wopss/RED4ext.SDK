#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game::ui
{
struct OnRecycleEventAdvanced : red::Event
{
    static constexpr const char* NAME = "gameuiOnRecycleEventAdvanced";
    static constexpr const char* ALIAS = "RecycleEventAdvanced";

};
RED4EXT_ASSERT_SIZE(OnRecycleEventAdvanced, 0x40);
} // namespace game::ui
using gameuiOnRecycleEventAdvanced = game::ui::OnRecycleEventAdvanced;
using RecycleEventAdvanced = game::ui::OnRecycleEventAdvanced;
} // namespace RED4ext

// clang-format on
