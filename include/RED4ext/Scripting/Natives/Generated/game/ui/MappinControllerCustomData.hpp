#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>

namespace RED4ext
{
namespace game::ui
{
struct MappinControllerCustomData : IScriptable
{
    static constexpr const char* NAME = "gameuiMappinControllerCustomData";
    static constexpr const char* ALIAS = "MappinControllerCustomData";

};
RED4EXT_ASSERT_SIZE(MappinControllerCustomData, 0x40);
} // namespace game::ui
using gameuiMappinControllerCustomData = game::ui::MappinControllerCustomData;
using MappinControllerCustomData = game::ui::MappinControllerCustomData;
} // namespace RED4ext

// clang-format on
