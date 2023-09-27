#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>

namespace RED4ext
{
struct IScriptable;
namespace ink { struct CompoundWidget; }

namespace ink
{
struct AsyncSpawnData : IScriptable
{
    static constexpr const char* NAME = "inkAsyncSpawnData";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk40[0x58 - 0x40]; // 40
    CName libraryID; // 58
    WeakHandle<ink::CompoundWidget> parentWidget; // 60
    uint8_t unk70[0xD8 - 0x70]; // 70
    bool triggerCallbackAsync; // D8
    uint8_t unkD9[0xE0 - 0xD9]; // D9
    Handle<IScriptable> userData; // E0
    uint8_t unkF0[0x100 - 0xF0]; // F0
    CName introAnimation; // 100
};
RED4EXT_ASSERT_SIZE(AsyncSpawnData, 0x108);
} // namespace ink
using inkAsyncSpawnData = ink::AsyncSpawnData;
} // namespace RED4ext

// clang-format on
