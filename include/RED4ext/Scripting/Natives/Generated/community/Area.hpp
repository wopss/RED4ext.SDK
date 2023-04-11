#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/Scripting/Natives/Generated/community/CommunityEntrySpotsData.hpp>

namespace RED4ext
{
namespace community
{
struct Area : ISerializable
{
    static constexpr const char* NAME = "communityArea";
    static constexpr const char* ALIAS = NAME;

    DynArray<community::CommunityEntrySpotsData> entriesData; // 30
};
RED4EXT_ASSERT_SIZE(Area, 0x40);
} // namespace community
using communityArea = community::Area;
} // namespace RED4ext

// clang-format on
