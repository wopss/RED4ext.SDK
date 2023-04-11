#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/ChoiceNodeNsVisualizerStyle.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/PropId.hpp>

namespace RED4ext
{
namespace scn
{
struct ChoiceNodeNsAttachToPropParams
{
    static constexpr const char* NAME = "scnChoiceNodeNsAttachToPropParams";
    static constexpr const char* ALIAS = NAME;

    scn::PropId propId; // 00
    scn::ChoiceNodeNsVisualizerStyle visualizerStyle; // 04
    uint8_t unk05[0x8 - 0x5]; // 5
};
RED4EXT_ASSERT_SIZE(ChoiceNodeNsAttachToPropParams, 0x8);
} // namespace scn
using scnChoiceNodeNsAttachToPropParams = scn::ChoiceNodeNsAttachToPropParams;
} // namespace RED4ext

// clang-format on
