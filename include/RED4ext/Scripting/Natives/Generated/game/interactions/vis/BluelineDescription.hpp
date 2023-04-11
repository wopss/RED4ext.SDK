#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>

namespace RED4ext
{
namespace game::interactions::vis { struct BluelinePart; }

namespace game::interactions::vis
{
struct BluelineDescription : IScriptable
{
    static constexpr const char* NAME = "gameinteractionsvisBluelineDescription";
    static constexpr const char* ALIAS = "BluelineDescription";

    DynArray<Handle<game::interactions::vis::BluelinePart>> parts; // 40
};
RED4EXT_ASSERT_SIZE(BluelineDescription, 0x50);
} // namespace game::interactions::vis
using gameinteractionsvisBluelineDescription = game::interactions::vis::BluelineDescription;
using BluelineDescription = game::interactions::vis::BluelineDescription;
} // namespace RED4ext

// clang-format on
