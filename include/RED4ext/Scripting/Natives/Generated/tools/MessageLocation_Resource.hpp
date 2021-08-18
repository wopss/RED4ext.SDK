#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/tools/IMessageLocation.hpp>

namespace RED4ext
{
namespace tools { 
struct MessageLocation_Resource : tools::IMessageLocation
{
    static constexpr const char* NAME = "toolsMessageLocation_Resource";
    static constexpr const char* ALIAS = NAME;

    MessageResourcePath path; // 30
};
RED4EXT_ASSERT_SIZE(MessageLocation_Resource, 0x38);
} // namespace tools
} // namespace RED4ext
