#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/IMarker.hpp>

namespace RED4ext
{
namespace world { 
struct QuestMarker : world::IMarker
{
    static constexpr const char* NAME = "worldQuestMarker";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(QuestMarker, 0x30);
} // namespace world
} // namespace RED4ext
