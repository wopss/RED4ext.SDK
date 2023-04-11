#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/IKChainSettings.hpp>

namespace RED4ext
{
namespace anim
{
struct TEMP_IKTargetsControllerBodyType
{
    static constexpr const char* NAME = "animTEMP_IKTargetsControllerBodyType";
    static constexpr const char* ALIAS = NAME;

    CName genderTag; // 00
    CName bodyTypeTag; // 08
    DynArray<anim::IKChainSettings> ikChainSettings; // 10
};
RED4EXT_ASSERT_SIZE(TEMP_IKTargetsControllerBodyType, 0x20);
} // namespace anim
using animTEMP_IKTargetsControllerBodyType = anim::TEMP_IKTargetsControllerBodyType;
} // namespace RED4ext

// clang-format on
