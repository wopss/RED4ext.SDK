#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/ISerializable.hpp>

namespace RED4ext
{
namespace world
{
struct IQuestPrefabStateListener : ISerializable
{
    static constexpr const char* NAME = "worldIQuestPrefabStateListener";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(IQuestPrefabStateListener, 0x30);
} // namespace world
using worldIQuestPrefabStateListener = world::IQuestPrefabStateListener;
} // namespace RED4ext

// clang-format on
