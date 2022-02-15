#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/IReactionSystem.hpp>

namespace RED4ext
{
namespace AI { 
struct ReactionSystem : AI::IReactionSystem
{
    static constexpr const char* NAME = "AIReactionSystem";
    static constexpr const char* ALIAS = "ReactionSystem";

    uint8_t unk48[0x410 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(ReactionSystem, 0x410);
} // namespace AI
using ReactionSystem = AI::ReactionSystem;
} // namespace RED4ext
