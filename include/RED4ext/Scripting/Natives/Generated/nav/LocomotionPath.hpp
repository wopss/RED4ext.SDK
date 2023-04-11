#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/nav/LocomotionPathPointInfo.hpp>
#include <RED4ext/Scripting/Natives/Generated/nav/LocomotionPathPointUserDataEntry.hpp>
#include <RED4ext/Scripting/Natives/Generated/nav/LocomotionPathSegmentInfo.hpp>

namespace RED4ext
{
namespace nav
{
struct LocomotionPath : ISerializable
{
    static constexpr const char* NAME = "navLocomotionPath";
    static constexpr const char* ALIAS = NAME;

    NodeRef splineNodeRef; // 30
    DynArray<nav::LocomotionPathSegmentInfo> segments; // 38
    DynArray<nav::LocomotionPathSegmentInfo> backwardSegments; // 48
    DynArray<nav::LocomotionPathPointInfo> points; // 58
    DynArray<nav::LocomotionPathPointUserDataEntry> userData; // 68
};
RED4EXT_ASSERT_SIZE(LocomotionPath, 0x78);
} // namespace nav
using navLocomotionPath = nav::LocomotionPath;
} // namespace RED4ext

// clang-format on
