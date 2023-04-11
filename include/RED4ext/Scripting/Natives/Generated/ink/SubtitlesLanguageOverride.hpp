#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/UserData.hpp>

namespace RED4ext
{
namespace ink
{
struct SubtitlesLanguageOverride : ink::UserData
{
    static constexpr const char* NAME = "inkSubtitlesLanguageOverride";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(SubtitlesLanguageOverride, 0x40);
} // namespace ink
using inkSubtitlesLanguageOverride = ink::SubtitlesLanguageOverride;
} // namespace RED4ext

// clang-format on
