#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/Scripting/Natives/Generated/save/Metadata.hpp>

namespace RED4ext
{
namespace save
{
struct MetadataContainer : ISerializable
{
    static constexpr const char* NAME = "saveMetadataContainer";
    static constexpr const char* ALIAS = NAME;

    save::Metadata metadata; // 30
};
RED4EXT_ASSERT_SIZE(MetadataContainer, 0x400);
} // namespace save
using saveMetadataContainer = save::MetadataContainer;
} // namespace RED4ext

// clang-format on
