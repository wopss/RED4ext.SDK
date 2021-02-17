#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Types/generated/ent/LookAtAddEvent.hpp>

namespace RED4ext
{
namespace ent { 
struct ContextualLookAtAddEvent : ent::LookAtAddEvent
{
    static constexpr const char* NAME = "entContextualLookAtAddEvent";
    static constexpr const char* ALIAS = "ContextualLookAtAddEvent";

    CName contextName; // D8
};
RED4EXT_ASSERT_SIZE(ContextualLookAtAddEvent, 0xE0);
} // namespace ent
using ContextualLookAtAddEvent = ent::ContextualLookAtAddEvent;
} // namespace RED4ext
