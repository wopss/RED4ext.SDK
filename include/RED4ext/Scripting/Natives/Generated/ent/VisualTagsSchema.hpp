#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/TagList.hpp>

namespace RED4ext
{
namespace ent
{
struct VisualTagsSchema : ISerializable
{
    static constexpr const char* NAME = "entVisualTagsSchema";
    static constexpr const char* ALIAS = NAME;

    red::TagList visualTags; // 30
    CName schema; // 40
};
RED4EXT_ASSERT_SIZE(VisualTagsSchema, 0x48);
} // namespace ent
using entVisualTagsSchema = ent::VisualTagsSchema;
} // namespace RED4ext

// clang-format on
