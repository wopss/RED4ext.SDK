#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/UniversalRef.hpp>

namespace RED4ext
{
namespace quest
{
struct ObservableUniversalRef : quest::UniversalRef
{
    static constexpr const char* NAME = "questObservableUniversalRef";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(ObservableUniversalRef, 0x78);
} // namespace quest
using questObservableUniversalRef = quest::ObservableUniversalRef;
} // namespace RED4ext

// clang-format on
