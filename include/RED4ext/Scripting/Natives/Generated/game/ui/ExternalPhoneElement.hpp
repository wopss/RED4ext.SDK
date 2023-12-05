#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/LocalPhoneElement.hpp>

namespace RED4ext
{
namespace ink { struct WidgetLibraryResource; }

namespace game::ui
{
struct ExternalPhoneElement : game::ui::LocalPhoneElement
{
    static constexpr const char* NAME = "gameuiExternalPhoneElement";
    static constexpr const char* ALIAS = NAME;

    Ref<ink::WidgetLibraryResource> libraryResource; // 68
};
RED4EXT_ASSERT_SIZE(ExternalPhoneElement, 0x80);
} // namespace game::ui
using gameuiExternalPhoneElement = game::ui::ExternalPhoneElement;
} // namespace RED4ext

// clang-format on
