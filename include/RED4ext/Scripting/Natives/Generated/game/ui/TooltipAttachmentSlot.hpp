#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WidgetLogicController.hpp>

namespace RED4ext
{
namespace game::ui
{
struct TooltipAttachmentSlot : ink::WidgetLogicController
{
    static constexpr const char* NAME = "gameuiTooltipAttachmentSlot";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(TooltipAttachmentSlot, 0x78);
} // namespace game::ui
using gameuiTooltipAttachmentSlot = game::ui::TooltipAttachmentSlot;
} // namespace RED4ext

// clang-format on
