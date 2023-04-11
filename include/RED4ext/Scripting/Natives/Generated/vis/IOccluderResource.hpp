#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/ISerializable.hpp>

namespace RED4ext
{
namespace vis
{
struct IOccluderResource : ISerializable
{
    static constexpr const char* NAME = "visIOccluderResource";
    static constexpr const char* ALIAS = NAME;

    uint32_t resourceHash; // 30
    uint8_t unk34[0x38 - 0x34]; // 34
};
RED4EXT_ASSERT_SIZE(IOccluderResource, 0x38);
} // namespace vis
using visIOccluderResource = vis::IOccluderResource;
} // namespace RED4ext

// clang-format on
