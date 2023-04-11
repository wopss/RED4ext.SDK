#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/ActorId.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/ChoiceNodeNsVisualizerStyle.hpp>

namespace RED4ext
{
namespace scn
{
struct ChoiceNodeNsAttachToActorParams
{
    static constexpr const char* NAME = "scnChoiceNodeNsAttachToActorParams";
    static constexpr const char* ALIAS = NAME;

    scn::ActorId actorId; // 00
    scn::ChoiceNodeNsVisualizerStyle visualizerStyle; // 04
    uint8_t unk05[0x8 - 0x5]; // 5
};
RED4EXT_ASSERT_SIZE(ChoiceNodeNsAttachToActorParams, 0x8);
} // namespace scn
using scnChoiceNodeNsAttachToActorParams = scn::ChoiceNodeNsAttachToActorParams;
} // namespace RED4ext

// clang-format on
