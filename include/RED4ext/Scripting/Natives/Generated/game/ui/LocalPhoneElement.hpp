#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/PhoneElementVisibility.hpp>

namespace RED4ext
{
namespace ink { struct AsyncSpawnRequest; }
namespace ink { struct Widget; }

namespace game::ui
{
struct LocalPhoneElement : game::ui::PhoneElementVisibility
{
    static constexpr const char* NAME = "gameuiLocalPhoneElement";
    static constexpr const char* ALIAS = NAME;

    WeakHandle<ink::AsyncSpawnRequest> request; // 40
    WeakHandle<ink::Widget> widget; // 50
    CName libraryID; // 60
};
RED4EXT_ASSERT_SIZE(LocalPhoneElement, 0x68);
} // namespace game::ui
using gameuiLocalPhoneElement = game::ui::LocalPhoneElement;
} // namespace RED4ext

// clang-format on
