#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/ISerializable.hpp>

namespace RED4ext
{
namespace game::graph
{
struct CNode : ISerializable
{
    static constexpr const char* NAME = "gamegraphCNode";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(CNode, 0x30);
} // namespace game::graph
using gamegraphCNode = game::graph::CNode;
} // namespace RED4ext

// clang-format on
