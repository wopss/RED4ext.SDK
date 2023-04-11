#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/SignalUserData.hpp>

namespace RED4ext
{
namespace game
{
struct TaggedSignalUserData : game::SignalUserData
{
    static constexpr const char* NAME = "gameTaggedSignalUserData";
    static constexpr const char* ALIAS = "TaggedSignalUserData";

    DynArray<CName> tags; // 40
};
RED4EXT_ASSERT_SIZE(TaggedSignalUserData, 0x50);
} // namespace game
using gameTaggedSignalUserData = game::TaggedSignalUserData;
using TaggedSignalUserData = game::TaggedSignalUserData;
} // namespace RED4ext

// clang-format on
