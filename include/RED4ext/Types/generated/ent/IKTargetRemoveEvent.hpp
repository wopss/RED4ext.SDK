#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/anim/IKTargetRef.hpp>
#include <RED4ext/Types/generated/red/Event.hpp>

namespace RED4ext
{
namespace ent { 
struct IKTargetRemoveEvent : red::Event
{
    static constexpr const char* NAME = "entIKTargetRemoveEvent";
    static constexpr const char* ALIAS = "IKTargetRemoveEvent";

    anim::IKTargetRef ikTargetRef; // 40
};
RED4EXT_ASSERT_SIZE(IKTargetRemoveEvent, 0x50);
} // namespace ent
using IKTargetRemoveEvent = ent::IKTargetRemoveEvent;
} // namespace RED4ext
