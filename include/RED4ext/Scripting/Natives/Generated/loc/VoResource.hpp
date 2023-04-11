#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/CResource.hpp>

namespace RED4ext
{
namespace loc
{
struct VoResource : CResource
{
    static constexpr const char* NAME = "locVoResource";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(VoResource, 0x40);
} // namespace loc
using locVoResource = loc::VoResource;
} // namespace RED4ext

// clang-format on
