#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>

namespace RED4ext
{
namespace ink
{
struct ServerInfo : IScriptable
{
    static constexpr const char* NAME = "inkServerInfo";
    static constexpr const char* ALIAS = "ServerInfo";

    int32_t number; // 40
    uint8_t unk44[0x48 - 0x44]; // 44
    CString kind; // 48
    CString hostname; // 68
    CString address; // 88
    CString worldDescription; // A8
};
RED4EXT_ASSERT_SIZE(ServerInfo, 0xC8);
} // namespace ink
using inkServerInfo = ink::ServerInfo;
using ServerInfo = ink::ServerInfo;
} // namespace RED4ext

// clang-format on
