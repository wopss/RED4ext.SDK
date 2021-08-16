#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Types/SimpleTypes.hpp>
#include <RED4ext/Types/generated/scn/NodeId.hpp>
#include <RED4ext/Types/generated/scn/dev/EventType.hpp>

namespace RED4ext
{
namespace scn::dev { 
struct Event
{
    static constexpr const char* NAME = "scndevEvent";
    static constexpr const char* ALIAS = NAME;

    scn::dev::EventType type; // 00
    scn::NodeId nodeId; // 04
    CString message; // 08
};
RED4EXT_ASSERT_SIZE(Event, 0x28);
} // namespace scn::dev
} // namespace RED4ext
