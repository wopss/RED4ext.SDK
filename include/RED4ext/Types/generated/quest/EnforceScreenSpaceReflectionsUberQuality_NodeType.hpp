#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/quest/IRenderFxManagerNodeType.hpp>

namespace RED4ext
{
namespace quest { 
struct EnforceScreenSpaceReflectionsUberQuality_NodeType : quest::IRenderFxManagerNodeType
{
    static constexpr const char* NAME = "questEnforceScreenSpaceReflectionsUberQuality_NodeType";
    static constexpr const char* ALIAS = NAME;

    bool enabled; // 38
    uint8_t unk39[0x40 - 0x39]; // 39
};
RED4EXT_ASSERT_SIZE(EnforceScreenSpaceReflectionsUberQuality_NodeType, 0x40);
} // namespace quest
} // namespace RED4ext
