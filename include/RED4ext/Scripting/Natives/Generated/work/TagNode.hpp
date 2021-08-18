#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/work/IEntry.hpp>

namespace RED4ext
{
namespace work { 
struct TagNode : work::IEntry
{
    static constexpr const char* NAME = "workTagNode";
    static constexpr const char* ALIAS = NAME;

    CName tag; // 38
};
RED4EXT_ASSERT_SIZE(TagNode, 0x40);
} // namespace work
} // namespace RED4ext
