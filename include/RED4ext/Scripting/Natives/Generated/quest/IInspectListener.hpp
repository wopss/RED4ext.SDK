#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>

namespace RED4ext
{
namespace quest
{
struct IInspectListener : IScriptable
{
    static constexpr const char* NAME = "questIInspectListener";
    static constexpr const char* ALIAS = "IInspectListener";

};
RED4EXT_ASSERT_SIZE(IInspectListener, 0x40);
} // namespace quest
using questIInspectListener = quest::IInspectListener;
using IInspectListener = quest::IInspectListener;
} // namespace RED4ext

// clang-format on
