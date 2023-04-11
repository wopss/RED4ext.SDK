#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>

namespace RED4ext
{
namespace ink { struct ScreenProjection; }

namespace game::ui
{
struct ScreenProjectionsData : IScriptable
{
    static constexpr const char* NAME = "gameuiScreenProjectionsData";
    static constexpr const char* ALIAS = NAME;

    DynArray<Handle<ink::ScreenProjection>> data; // 40
};
RED4EXT_ASSERT_SIZE(ScreenProjectionsData, 0x50);
} // namespace game::ui
using gameuiScreenProjectionsData = game::ui::ScreenProjectionsData;
} // namespace RED4ext

// clang-format on
