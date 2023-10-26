#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector4.hpp>

namespace RED4ext
{
namespace rend
{
struct __declspec(align(0x10)) TextureRegionPart : ISerializable
{
    static constexpr const char* NAME = "rendTextureRegionPart";
    static constexpr const char* ALIAS = NAME;

    Vector4 innerRegion; // 30
    Vector4 outerRegion; // 40
};
RED4EXT_ASSERT_SIZE(TextureRegionPart, 0x50);
} // namespace rend
using rendTextureRegionPart = rend::TextureRegionPart;
} // namespace RED4ext

// clang-format on
