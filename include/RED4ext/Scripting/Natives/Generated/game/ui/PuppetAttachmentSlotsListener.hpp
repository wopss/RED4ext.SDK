#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IAttachmentSlotsListener.hpp>

namespace RED4ext
{
namespace game::ui
{
struct PuppetAttachmentSlotsListener : game::IAttachmentSlotsListener
{
    static constexpr const char* NAME = "gameuiPuppetAttachmentSlotsListener";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk40[0x68 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(PuppetAttachmentSlotsListener, 0x68);
} // namespace game::ui
using gameuiPuppetAttachmentSlotsListener = game::ui::PuppetAttachmentSlotsListener;
} // namespace RED4ext

// clang-format on
