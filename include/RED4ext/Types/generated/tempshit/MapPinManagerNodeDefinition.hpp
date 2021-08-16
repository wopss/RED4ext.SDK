#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Types/SimpleTypes.hpp>
#include <RED4ext/Types/generated/Vector3.hpp>
#include <RED4ext/Types/generated/game/EntityReference.hpp>
#include <RED4ext/Types/generated/quest/DisableableNodeDefinition.hpp>
#include <RED4ext/Types/generated/tempshit/MapPinOperation.hpp>

namespace RED4ext
{
namespace tempshit { 
struct MapPinManagerNodeDefinition : quest::DisableableNodeDefinition
{
    static constexpr const char* NAME = "tempshitMapPinManagerNodeDefinition";
    static constexpr const char* ALIAS = NAME;

    CName mapPinName; // 48
    tempshit::MapPinOperation operation; // 50
    uint8_t unk51[0x58 - 0x51]; // 51
    game::EntityReference nodeRef; // 58
    Vector3 position; // 90
    uint8_t unk9C[0xA0 - 0x9C]; // 9C
    LocalizationString forceCaption; // A0
};
RED4EXT_ASSERT_SIZE(MapPinManagerNodeDefinition, 0xC8);
} // namespace tempshit
} // namespace RED4ext
