#pragma once

#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/behavior/Instance.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/Component.hpp>
#include <cstdint>

namespace RED4ext
{
namespace AI
{
struct CAgent : game::Component
{
    static constexpr const char* NAME = "AICAgent";
    static constexpr const char* ALIAS = "AIComponent";

    uint8_t unkA8[0xE0 - 0xA8];    // A8
    behavior::Instance instance;   // E0
    uint8_t unk1C8[0x4F0 - 0x1C8]; // 1C8
};
RED4EXT_ASSERT_SIZE(CAgent, 0x4F0);
RED4EXT_ASSERT_OFFSET(CAgent, instance, 0xE0);
} // namespace AI
using AICAgent = AI::CAgent;
using AIComponent = AI::CAgent;
} // namespace RED4ext
