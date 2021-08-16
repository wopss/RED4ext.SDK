#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/ISerializable.hpp>

namespace RED4ext
{
namespace physics { 
struct ISystemObject : ISerializable
{
    static constexpr const char* NAME = "physicsISystemObject";
    static constexpr const char* ALIAS = NAME;

    CName name; // 30
};
RED4EXT_ASSERT_SIZE(ISystemObject, 0x38);
} // namespace physics
} // namespace RED4ext
