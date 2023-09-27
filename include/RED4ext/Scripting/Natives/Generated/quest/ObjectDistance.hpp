#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EntityReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/quest/IDistance.hpp>

namespace RED4ext
{
namespace quest { struct UniversalRef; }

namespace quest
{
struct ObjectDistance : quest::IDistance
{
    static constexpr const char* NAME = "questObjectDistance";
    static constexpr const char* ALIAS = NAME;

    Handle<quest::UniversalRef> entityRef; // 30
    game::EntityReference nodeRef2; // 40
};
RED4EXT_ASSERT_SIZE(ObjectDistance, 0x78);
} // namespace quest
using questObjectDistance = quest::ObjectDistance;
} // namespace RED4ext

// clang-format on
