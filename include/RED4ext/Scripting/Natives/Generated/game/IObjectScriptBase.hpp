#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>

namespace RED4ext
{
namespace game { struct Object; }

namespace game
{
struct IObjectScriptBase : IScriptable
{
    static constexpr const char* NAME = "gameIObjectScriptBase";
    static constexpr const char* ALIAS = "IObjectScriptBase";

    uint8_t unk40[0x48 - 0x40]; // 40
    Handle<game::Object> gameObject; // 48
};
RED4EXT_ASSERT_SIZE(IObjectScriptBase, 0x58);
} // namespace game
using gameIObjectScriptBase = game::IObjectScriptBase;
using IObjectScriptBase = game::IObjectScriptBase;
} // namespace RED4ext

// clang-format on
