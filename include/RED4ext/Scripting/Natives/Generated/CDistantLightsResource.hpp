#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/res/StreamedResource.hpp>

namespace RED4ext
{
struct CDistantLightsResource : res::StreamedResource
{
    static constexpr const char* NAME = "CDistantLightsResource";
    static constexpr const char* ALIAS = NAME;

    DataBuffer data; // 40
};
RED4EXT_ASSERT_SIZE(CDistantLightsResource, 0x68);
} // namespace RED4ext

// clang-format on
