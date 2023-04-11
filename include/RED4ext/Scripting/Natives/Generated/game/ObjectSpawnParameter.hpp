#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/ISerializable.hpp>

namespace RED4ext
{
namespace game
{
struct ObjectSpawnParameter : ISerializable
{
    static constexpr const char* NAME = "gameObjectSpawnParameter";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(ObjectSpawnParameter, 0x30);
} // namespace game
using gameObjectSpawnParameter = game::ObjectSpawnParameter;
} // namespace RED4ext

// clang-format on
