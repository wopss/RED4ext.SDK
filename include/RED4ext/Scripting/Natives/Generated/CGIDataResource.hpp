#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/res/StreamedResource.hpp>

namespace RED4ext
{
struct CGIDataResource : res::StreamedResource
{
    static constexpr const char* NAME = "CGIDataResource";
    static constexpr const char* ALIAS = NAME;

    DeferredDataBuffer data; // 40
    uint64_t sectorHash; // 98
};
RED4EXT_ASSERT_SIZE(CGIDataResource, 0xA0);
} // namespace RED4ext

// clang-format on
