#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/Quaternion.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/IKTargetRequest.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/AnimTargetBasicData.hpp>

namespace RED4ext
{
namespace scn
{
struct __declspec(align(0x10)) IKEventData
{
    static constexpr const char* NAME = "scnIKEventData";
    static constexpr const char* ALIAS = NAME;

    Quaternion orientation; // 00
    scn::AnimTargetBasicData basic; // 10
    CName chainName; // 60
    anim::IKTargetRequest request; // 68
};
RED4EXT_ASSERT_SIZE(IKEventData, 0x80);
} // namespace scn
using scnIKEventData = scn::IKEventData;
} // namespace RED4ext

// clang-format on
