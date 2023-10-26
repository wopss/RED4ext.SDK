#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/Quaternion.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>

namespace RED4ext
{
namespace anim
{
struct __declspec(align(0x10)) IKChainSettings
{
    static constexpr const char* NAME = "animIKChainSettings";
    static constexpr const char* ALIAS = "IKChainSettings";

    CName chainName; // 00
    CName enableFloatTrack; // 08
    Vector3 ikEndPointOffset; // 10
    uint8_t unk1C[0x20 - 0x1C]; // 1C
    Quaternion ikEndRotationOffset; // 20
};
RED4EXT_ASSERT_SIZE(IKChainSettings, 0x30);
} // namespace anim
using animIKChainSettings = anim::IKChainSettings;
using IKChainSettings = anim::IKChainSettings;
} // namespace RED4ext

// clang-format on
