#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/ISerializable.hpp>

namespace RED4ext
{
namespace game::ui
{
struct IUIObjectsLoaderSystemListener : ISerializable
{
    static constexpr const char* NAME = "gameuiIUIObjectsLoaderSystemListener";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(IUIObjectsLoaderSystemListener, 0x30);
} // namespace game::ui
using gameuiIUIObjectsLoaderSystemListener = game::ui::IUIObjectsLoaderSystemListener;
} // namespace RED4ext

// clang-format on
