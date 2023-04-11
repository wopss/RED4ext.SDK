#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>

namespace RED4ext
{
namespace nav { struct LocomotionPathPointUserData; }

namespace nav
{
struct LocomotionPathPointUserDataEntry
{
    static constexpr const char* NAME = "navLocomotionPathPointUserDataEntry";
    static constexpr const char* ALIAS = NAME;

    Handle<nav::LocomotionPathPointUserData> userData; // 00
    uint32_t nextUserData; // 10
    uint8_t unk14[0x18 - 0x14]; // 14
};
RED4EXT_ASSERT_SIZE(LocomotionPathPointUserDataEntry, 0x18);
} // namespace nav
using navLocomotionPathPointUserDataEntry = nav::LocomotionPathPointUserDataEntry;
} // namespace RED4ext

// clang-format on
