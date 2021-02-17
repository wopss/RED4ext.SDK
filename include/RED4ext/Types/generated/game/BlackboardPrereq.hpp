#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/SimpleTypes.hpp>
#include <RED4ext/Types/generated/game/BlackboardPropertyBindingDefinition.hpp>
#include <RED4ext/Types/generated/game/IComparisonPrereq.hpp>

namespace RED4ext
{
namespace game { 
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
using BlackboardPrereq = game::BlackboardPrereq;
} // namespace RED4ext
