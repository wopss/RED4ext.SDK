#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/LookAtRequestForPart.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/AnimTargetBasicData.hpp>

namespace RED4ext
{
namespace scn
{
struct __declspec(align(0x10)) LookAtBasicEventData
{
    static constexpr const char* NAME = "scnLookAtBasicEventData";
    static constexpr const char* ALIAS = NAME;

    scn::AnimTargetBasicData basic; // 00
    bool removePreviousAdvancedLookAts; // 50
    uint8_t unk51[0x58 - 0x51]; // 51
    DynArray<anim::LookAtRequestForPart> requests; // 58
    uint8_t unk68[0x70 - 0x68]; // 68
};
RED4EXT_ASSERT_SIZE(LookAtBasicEventData, 0x70);
} // namespace scn
using scnLookAtBasicEventData = scn::LookAtBasicEventData;
} // namespace RED4ext

// clang-format on
