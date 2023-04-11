#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/CResource.hpp>

namespace RED4ext
{
namespace audio { struct AudioMetadata; }

namespace audio
{
struct CookedMetadataResource : CResource
{
    static constexpr const char* NAME = "audioCookedMetadataResource";
    static constexpr const char* ALIAS = NAME;

    DynArray<Handle<audio::AudioMetadata>> entries; // 40
};
RED4EXT_ASSERT_SIZE(CookedMetadataResource, 0x50);
} // namespace audio
using audioCookedMetadataResource = audio::CookedMetadataResource;
} // namespace RED4ext

// clang-format on
