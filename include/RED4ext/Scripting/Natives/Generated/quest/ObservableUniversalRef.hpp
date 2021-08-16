#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/UniversalRef.hpp>

namespace RED4ext
{
namespace quest { 
struct ObservableUniversalRef : quest::UniversalRef
{
    static constexpr const char* NAME = "questObservableUniversalRef";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk70[0x78 - 0x70]; // 70
};
RED4EXT_ASSERT_SIZE(ObservableUniversalRef, 0x78);
} // namespace quest
} // namespace RED4ext
