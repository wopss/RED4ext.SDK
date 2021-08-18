#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/Children.hpp>

namespace RED4ext
{
namespace ink { struct Widget; }

namespace ink { 
struct MultiChildren : ink::Children
{
    static constexpr const char* NAME = "inkMultiChildren";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk30[0x38 - 0x30]; // 30
    DynArray<Handle<ink::Widget>> children; // 38
};
RED4EXT_ASSERT_SIZE(MultiChildren, 0x48);
} // namespace ink
} // namespace RED4ext
