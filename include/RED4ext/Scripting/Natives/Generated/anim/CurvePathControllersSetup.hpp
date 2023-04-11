#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>

namespace RED4ext
{
namespace anim
{
struct CurvePathControllersSetup
{
    static constexpr const char* NAME = "animCurvePathControllersSetup";
    static constexpr const char* ALIAS = NAME;

    CName name; // 00
    CName startControllerName; // 08
    CName mainControllerName; // 10
    CName stopControllerName; // 18
};
RED4EXT_ASSERT_SIZE(CurvePathControllersSetup, 0x20);
} // namespace anim
using animCurvePathControllersSetup = anim::CurvePathControllersSetup;
} // namespace RED4ext

// clang-format on
