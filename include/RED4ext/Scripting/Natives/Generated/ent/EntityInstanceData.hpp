#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
namespace ent { 
struct EntityInstanceData : ISerializable
{
    static constexpr const char* NAME = "entEntityInstanceData";
    static constexpr const char* ALIAS = NAME;

    DataBuffer buffer; // 30
};
RED4EXT_ASSERT_SIZE(EntityInstanceData, 0x58);
} // namespace ent
} // namespace RED4ext
