#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>

namespace RED4ext
{
namespace game::ui
{
struct GenericNotificationViewData : IScriptable
{
    static constexpr const char* NAME = "gameuiGenericNotificationViewData";
    static constexpr const char* ALIAS = "GenericNotificationViewData";

    CString title; // 40
    CString text; // 60
    CName soundEvent; // 80
    CName soundAction; // 88
};
RED4EXT_ASSERT_SIZE(GenericNotificationViewData, 0x90);
} // namespace game::ui
using gameuiGenericNotificationViewData = game::ui::GenericNotificationViewData;
using GenericNotificationViewData = game::ui::GenericNotificationViewData;
} // namespace RED4ext

// clang-format on
