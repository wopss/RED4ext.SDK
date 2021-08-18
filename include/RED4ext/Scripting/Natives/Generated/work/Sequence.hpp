#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/WorkspotCategory.hpp>
#include <RED4ext/Scripting/Natives/Generated/work/IContainerEntry.hpp>

namespace RED4ext
{
namespace work { 
struct Sequence : work::IContainerEntry
{
    static constexpr const char* NAME = "workSequence";
    static constexpr const char* ALIAS = NAME;

    bool previousLoopInfinitely; // 50
    bool loopInfinitely; // 51
    uint8_t unk52[0x54 - 0x52]; // 52
    game::data::WorkspotCategory category; // 54
};
RED4EXT_ASSERT_SIZE(Sequence, 0x58);
} // namespace work
} // namespace RED4ext
