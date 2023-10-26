#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/Object.hpp>

namespace RED4ext
{
namespace cp
{
struct __declspec(align(0x10)) ConveyorObject : game::Object
{
    static constexpr const char* NAME = "cpConveyorObject";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk240[0x2B0 - 0x240]; // 240
    float rotationLerpFactor; // 2B0
    bool ignoreZAxis; // 2B4
    uint8_t unk2B5[0x2C0 - 0x2B5]; // 2B5
};
RED4EXT_ASSERT_SIZE(ConveyorObject, 0x2C0);
} // namespace cp
using cpConveyorObject = cp::ConveyorObject;
} // namespace RED4ext

// clang-format on
