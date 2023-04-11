#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IGameManagerNodeType.hpp>

namespace RED4ext
{
namespace quest
{
struct IGameManagerNonSignalStoppingNodeType : quest::IGameManagerNodeType
{
    static constexpr const char* NAME = "questIGameManagerNonSignalStoppingNodeType";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(IGameManagerNonSignalStoppingNodeType, 0x38);
} // namespace quest
using questIGameManagerNonSignalStoppingNodeType = quest::IGameManagerNonSignalStoppingNodeType;
} // namespace RED4ext

// clang-format on
