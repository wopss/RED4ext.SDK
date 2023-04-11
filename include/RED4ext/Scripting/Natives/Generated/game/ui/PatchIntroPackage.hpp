#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ui/PatchIntro.hpp>

namespace RED4ext
{
namespace game::ui
{
struct PatchIntroPackage
{
    static constexpr const char* NAME = "gameuiPatchIntroPackage";
    static constexpr const char* ALIAS = NAME;

    DynArray<game::ui::PatchIntro> patchIntrosNeeded; // 00
};
RED4EXT_ASSERT_SIZE(PatchIntroPackage, 0x10);
} // namespace game::ui
using gameuiPatchIntroPackage = game::ui::PatchIntroPackage;
} // namespace RED4ext

// clang-format on
