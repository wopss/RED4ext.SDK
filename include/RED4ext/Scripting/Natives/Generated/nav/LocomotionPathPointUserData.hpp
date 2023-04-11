#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/ISerializable.hpp>

namespace RED4ext
{
namespace nav
{
struct LocomotionPathPointUserData : ISerializable
{
    static constexpr const char* NAME = "navLocomotionPathPointUserData";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(LocomotionPathPointUserData, 0x30);
} // namespace nav
using navLocomotionPathPointUserData = nav::LocomotionPathPointUserData;
} // namespace RED4ext

// clang-format on
