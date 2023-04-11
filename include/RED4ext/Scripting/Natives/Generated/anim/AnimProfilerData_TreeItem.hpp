#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/ISerializable.hpp>

namespace RED4ext
{

namespace anim
{
struct AnimProfilerData_TreeItem : ISerializable
{
    static constexpr const char* NAME = "animAnimProfilerData_TreeItem";
    static constexpr const char* ALIAS = NAME;

    CName className; // 30
    float exclusiveTimeMS; // 38
    float inclusiveTimeMS; // 3C
    DynArray<Handle<anim::AnimProfilerData_TreeItem>> children; // 40
};
RED4EXT_ASSERT_SIZE(AnimProfilerData_TreeItem, 0x50);
} // namespace anim
using animAnimProfilerData_TreeItem = anim::AnimProfilerData_TreeItem;
} // namespace RED4ext

// clang-format on
