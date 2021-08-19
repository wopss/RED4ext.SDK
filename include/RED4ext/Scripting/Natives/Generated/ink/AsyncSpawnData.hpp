#pragma once

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

namespace ink { 
struct AsyncSpawnData : IScriptable
{
    static constexpr const char* NAME = "inkAsyncSpawnData";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk40[0x58 - 0x40]; // 40
    CName libraryID; // 58
    WeakHandle<ink::CompoundWidget> parentWidget; // 60
    uint8_t unk70[0xC0 - 0x70]; // 70
    bool triggerCallbackAsync; // C0
    uint8_t unkC1[0xC8 - 0xC1]; // C1
    Handle<IScriptable> userData; // C8
    uint8_t unkD8[0xE8 - 0xD8]; // D8
    CName introAnimation; // E8
};
RED4EXT_ASSERT_SIZE(AsyncSpawnData, 0xF0);
} // namespace ink
} // namespace RED4ext
