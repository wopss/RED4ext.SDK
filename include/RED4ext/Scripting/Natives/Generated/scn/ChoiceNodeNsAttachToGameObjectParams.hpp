#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/ChoiceNodeNsVisualizerStyle.hpp>

namespace RED4ext
{
namespace scn
{
struct ChoiceNodeNsAttachToGameObjectParams
{
    static constexpr const char* NAME = "scnChoiceNodeNsAttachToGameObjectParams";
    static constexpr const char* ALIAS = NAME;

    NodeRef nodeRef; // 00
    scn::ChoiceNodeNsVisualizerStyle visualizerStyle; // 08
    uint8_t unk09[0x10 - 0x9]; // 9
};
RED4EXT_ASSERT_SIZE(ChoiceNodeNsAttachToGameObjectParams, 0x10);
} // namespace scn
using scnChoiceNodeNsAttachToGameObjectParams = scn::ChoiceNodeNsAttachToGameObjectParams;
} // namespace RED4ext

// clang-format on
