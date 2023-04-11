#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/BlackboardPropertyBindingDefinition.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IComparisonPrereq.hpp>

namespace RED4ext
{
namespace game
{
struct BlackboardPrereq : game::IComparisonPrereq
{
    static constexpr const char* NAME = "gameBlackboardPrereq";
    static constexpr const char* ALIAS = "BlackboardPrereq";

    game::BlackboardPropertyBindingDefinition blackboardValue; // 48
    Variant value; // 80
    uint8_t unk98[0xA0 - 0x98]; // 98
};
RED4EXT_ASSERT_SIZE(BlackboardPrereq, 0xA0);
} // namespace game
using gameBlackboardPrereq = game::BlackboardPrereq;
using BlackboardPrereq = game::BlackboardPrereq;
} // namespace RED4ext

// clang-format on
