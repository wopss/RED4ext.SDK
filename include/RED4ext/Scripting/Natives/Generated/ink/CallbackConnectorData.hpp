#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>

namespace RED4ext
{
struct IScriptable;

namespace ink
{
struct CallbackConnectorData : IScriptable
{
    static constexpr const char* NAME = "inkCallbackConnectorData";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk40[0x78 - 0x40]; // 40
    Handle<IScriptable> userData; // 78
};
RED4EXT_ASSERT_SIZE(CallbackConnectorData, 0x88);
} // namespace ink
using inkCallbackConnectorData = ink::CallbackConnectorData;
} // namespace RED4ext

// clang-format on
