#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/IconReference.hpp>

namespace RED4ext
{
namespace game::ui
{
struct TweakDBIconReference : ink::IconReference
{
    static constexpr const char* NAME = "gameuiTweakDBIconReference";
    static constexpr const char* ALIAS = "UIIconReference";

    TweakDBID iconID; // 40
};
RED4EXT_ASSERT_SIZE(TweakDBIconReference, 0x48);
} // namespace game::ui
using gameuiTweakDBIconReference = game::ui::TweakDBIconReference;
using UIIconReference = game::ui::TweakDBIconReference;
} // namespace RED4ext

// clang-format on
