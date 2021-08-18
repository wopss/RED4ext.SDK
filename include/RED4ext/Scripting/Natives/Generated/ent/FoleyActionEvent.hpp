#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace ent { 
struct FoleyActionEvent : red::Event
{
    static constexpr const char* NAME = "entFoleyActionEvent";
    static constexpr const char* ALIAS = NAME;

    CName actionName; // 40
};
RED4EXT_ASSERT_SIZE(FoleyActionEvent, 0x48);
} // namespace ent
} // namespace RED4ext
