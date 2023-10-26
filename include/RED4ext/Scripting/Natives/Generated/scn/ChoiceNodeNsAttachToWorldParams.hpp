#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Quaternion.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/ChoiceNodeNsVisualizerStyle.hpp>

namespace RED4ext
{
namespace scn
{
struct __declspec(align(0x10)) ChoiceNodeNsAttachToWorldParams
{
    static constexpr const char* NAME = "scnChoiceNodeNsAttachToWorldParams";
    static constexpr const char* ALIAS = NAME;

    Vector3 entityPosition; // 00
    uint8_t unk0C[0x10 - 0xC]; // C
    Quaternion entityOrientation; // 10
    float customEntityRadius; // 20
    scn::ChoiceNodeNsVisualizerStyle visualizerStyle; // 24
    uint8_t unk25[0x30 - 0x25]; // 25
};
RED4EXT_ASSERT_SIZE(ChoiceNodeNsAttachToWorldParams, 0x30);
} // namespace scn
using scnChoiceNodeNsAttachToWorldParams = scn::ChoiceNodeNsAttachToWorldParams;
} // namespace RED4ext

// clang-format on
