#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/CResource.hpp>

namespace RED4ext
{
struct ISerializable;

struct JsonResource : CResource
{
    static constexpr const char* NAME = "JsonResource";
    static constexpr const char* ALIAS = NAME;

    Handle<ISerializable> root; // 40
};
RED4EXT_ASSERT_SIZE(JsonResource, 0x50);
} // namespace RED4ext

// clang-format on
