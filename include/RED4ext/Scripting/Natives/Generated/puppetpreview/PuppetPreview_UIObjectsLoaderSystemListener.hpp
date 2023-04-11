#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/IUIObjectsLoaderSystemListener.hpp>

namespace RED4ext
{
namespace puppetpreview
{
struct PuppetPreview_UIObjectsLoaderSystemListener : game::ui::IUIObjectsLoaderSystemListener
{
    static constexpr const char* NAME = "puppetpreviewPuppetPreview_UIObjectsLoaderSystemListener";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk30[0x40 - 0x30]; // 30
};
RED4EXT_ASSERT_SIZE(PuppetPreview_UIObjectsLoaderSystemListener, 0x40);
} // namespace puppetpreview
using puppetpreviewPuppetPreview_UIObjectsLoaderSystemListener = puppetpreview::PuppetPreview_UIObjectsLoaderSystemListener;
} // namespace RED4ext

// clang-format on
