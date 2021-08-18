#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/ISerializable.hpp>

namespace RED4ext
{
namespace game::interactions { 
struct IShapeDefinition : ISerializable
{
    static constexpr const char* NAME = "gameinteractionsIShapeDefinition";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(IShapeDefinition, 0x30);
} // namespace game::interactions
} // namespace RED4ext
