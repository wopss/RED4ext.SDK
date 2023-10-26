#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/CActionScriptProxy.hpp>

namespace RED4ext
{
struct __declspec(align(0x10)) ActionTeleportScriptProxy : CActionScriptProxy
{
    static constexpr const char* NAME = "ActionTeleportScriptProxy";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk60[0x80 - 0x60]; // 60
};
RED4EXT_ASSERT_SIZE(ActionTeleportScriptProxy, 0x80);
} // namespace RED4ext

// clang-format on
