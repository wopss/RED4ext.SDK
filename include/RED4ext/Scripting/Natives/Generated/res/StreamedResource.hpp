#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/CResource.hpp>

namespace RED4ext
{
namespace res
{
struct StreamedResource : CResource
{
    static constexpr const char* NAME = "resStreamedResource";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(StreamedResource, 0x40);
} // namespace res
using resStreamedResource = res::StreamedResource;
} // namespace RED4ext

// clang-format on
