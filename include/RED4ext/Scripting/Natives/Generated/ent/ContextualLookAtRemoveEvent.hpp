#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/LookAtRemoveEvent.hpp>

namespace RED4ext
{
namespace ent
{
struct ContextualLookAtRemoveEvent : ent::LookAtRemoveEvent
{
    static constexpr const char* NAME = "entContextualLookAtRemoveEvent";
    static constexpr const char* ALIAS = "ContextualLookAtRemoveEvent";

    CName contextName; // 58
};
RED4EXT_ASSERT_SIZE(ContextualLookAtRemoveEvent, 0x60);
} // namespace ent
using entContextualLookAtRemoveEvent = ent::ContextualLookAtRemoveEvent;
using ContextualLookAtRemoveEvent = ent::ContextualLookAtRemoveEvent;
} // namespace RED4ext

// clang-format on
