#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EntityReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/MarkerType.hpp>

namespace RED4ext
{
namespace scn
{
struct Marker
{
    static constexpr const char* NAME = "scnMarker";
    static constexpr const char* ALIAS = NAME;

    scn::MarkerType type; // 00
    uint8_t unk04[0x8 - 0x4]; // 4
    CName localMarkerId; // 08
    NodeRef nodeRef; // 10
    game::EntityReference entityRef; // 18
    CName slotName; // 50
    bool isMounted; // 58
    uint8_t unk59[0x60 - 0x59]; // 59
};
RED4EXT_ASSERT_SIZE(Marker, 0x60);
} // namespace scn
using scnMarker = scn::Marker;
} // namespace RED4ext

// clang-format on
