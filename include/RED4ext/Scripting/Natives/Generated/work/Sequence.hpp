#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/WorkspotCategory.hpp>
#include <RED4ext/Scripting/Natives/Generated/work/IContainerEntry.hpp>

namespace RED4ext
{
namespace work
{
struct Sequence : work::IContainerEntry
{
    static constexpr const char* NAME = "workSequence";
    static constexpr const char* ALIAS = NAME;

    bool previousLoopInfinitely; // 58
    bool loopInfinitely; // 59
    uint8_t unk5A[0x5C - 0x5A]; // 5A
    game::data::WorkspotCategory category; // 5C
};
RED4EXT_ASSERT_SIZE(Sequence, 0x60);
} // namespace work
using workSequence = work::Sequence;
} // namespace RED4ext

// clang-format on
