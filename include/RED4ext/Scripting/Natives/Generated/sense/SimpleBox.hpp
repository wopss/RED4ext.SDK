#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Box.hpp>
#include <RED4ext/Scripting/Natives/Generated/sense/IShape.hpp>

namespace RED4ext
{
namespace sense { 
struct SimpleBox : sense::IShape
{
    static constexpr const char* NAME = "senseSimpleBox";
    static constexpr const char* ALIAS = "SenseBox";

    Box box; // 50
};
RED4EXT_ASSERT_SIZE(SimpleBox, 0x70);
} // namespace sense
using SenseBox = sense::SimpleBox;
} // namespace RED4ext
