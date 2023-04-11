#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/ISerializable.hpp>

namespace RED4ext
{
namespace anim { struct AnimProfilerData_TreeItem; }

namespace anim
{
struct AnimProfileData_RootItem : ISerializable
{
    static constexpr const char* NAME = "animAnimProfileData_RootItem";
    static constexpr const char* ALIAS = NAME;

    float timeMS; // 30
    uint8_t unk34[0x38 - 0x34]; // 34
    DynArray<Handle<anim::AnimProfilerData_TreeItem>> children; // 38
};
RED4EXT_ASSERT_SIZE(AnimProfileData_RootItem, 0x48);
} // namespace anim
using animAnimProfileData_RootItem = anim::AnimProfileData_RootItem;
} // namespace RED4ext

// clang-format on
