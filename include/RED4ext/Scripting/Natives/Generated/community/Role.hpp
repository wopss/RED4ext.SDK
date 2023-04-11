#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/ISerializable.hpp>

namespace RED4ext
{
namespace community
{
struct Role : ISerializable
{
    static constexpr const char* NAME = "communityRole";
    static constexpr const char* ALIAS = NAME;

    CName roleName; // 30
};
RED4EXT_ASSERT_SIZE(Role, 0x38);
} // namespace community
using communityRole = community::Role;
} // namespace RED4ext

// clang-format on
