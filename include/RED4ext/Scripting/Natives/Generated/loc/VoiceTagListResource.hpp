#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/CResource.hpp>
#include <RED4ext/Scripting/Natives/Generated/loc/VoiceTag.hpp>

namespace RED4ext
{
namespace loc
{
struct VoiceTagListResource : CResource
{
    static constexpr const char* NAME = "locVoiceTagListResource";
    static constexpr const char* ALIAS = NAME;

    DynArray<loc::VoiceTag> voiceTags; // 40
};
RED4EXT_ASSERT_SIZE(VoiceTagListResource, 0x50);
} // namespace loc
using locVoiceTagListResource = loc::VoiceTagListResource;
} // namespace RED4ext

// clang-format on
