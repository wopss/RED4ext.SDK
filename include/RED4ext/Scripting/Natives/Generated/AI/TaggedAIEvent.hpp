#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/AIEvent.hpp>

namespace RED4ext
{
namespace AI
{
struct TaggedAIEvent : AI::AIEvent
{
    static constexpr const char* NAME = "AITaggedAIEvent";
    static constexpr const char* ALIAS = "TaggedAIEvent";

    DynArray<CName> tags; // 50
};
RED4EXT_ASSERT_SIZE(TaggedAIEvent, 0x60);
} // namespace AI
using AITaggedAIEvent = AI::TaggedAIEvent;
using TaggedAIEvent = AI::TaggedAIEvent;
} // namespace RED4ext

// clang-format on
