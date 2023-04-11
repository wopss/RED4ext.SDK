#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/SignalUserDataDefinition.hpp>

namespace RED4ext
{
namespace game
{
struct TaggedSignalUserDataDefinition : game::SignalUserDataDefinition
{
    static constexpr const char* NAME = "gameTaggedSignalUserDataDefinition";
    static constexpr const char* ALIAS = "TaggedSignalUserDataDefinition";

    DynArray<CName> tags; // 30
};
RED4EXT_ASSERT_SIZE(TaggedSignalUserDataDefinition, 0x40);
} // namespace game
using gameTaggedSignalUserDataDefinition = game::TaggedSignalUserDataDefinition;
using TaggedSignalUserDataDefinition = game::TaggedSignalUserDataDefinition;
} // namespace RED4ext

// clang-format on
