#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>

namespace RED4ext
{
namespace ink { 
struct ItemPositionProviderWrapper : IScriptable
{
    static constexpr const char* NAME = "inkItemPositionProviderWrapper";
    static constexpr const char* ALIAS = "inkItemPositionProvider";

    uint8_t unk40[0x48 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(ItemPositionProviderWrapper, 0x48);
} // namespace ink
using inkItemPositionProvider = ink::ItemPositionProviderWrapper;
} // namespace RED4ext
