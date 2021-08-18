#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
namespace physics { 
struct DeferredCollection : ISerializable
{
    static constexpr const char* NAME = "physicsDeferredCollection";
    static constexpr const char* ALIAS = NAME;

    DeferredDataBuffer buffer; // 30
    uint8_t unk88[0x98 - 0x88]; // 88
};
RED4EXT_ASSERT_SIZE(DeferredCollection, 0x98);
} // namespace physics
} // namespace RED4ext
