#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>

namespace RED4ext
{
namespace ink { 
struct ShowInitializeUserScreen : IScriptable
{
    static constexpr const char* NAME = "inkShowInitializeUserScreen";
    static constexpr const char* ALIAS = "ShowInitializeUserScreen";

    bool show; // 40
    uint8_t unk41[0x48 - 0x41]; // 41
};
RED4EXT_ASSERT_SIZE(ShowInitializeUserScreen, 0x48);
} // namespace ink
using ShowInitializeUserScreen = ink::ShowInitializeUserScreen;
} // namespace RED4ext
