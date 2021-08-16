#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/Scripting/Natives/Generated/Transform.hpp>

namespace RED4ext
{
namespace game { 
struct EnvironmentDamageReceiverShape : ISerializable
{
    static constexpr const char* NAME = "gameEnvironmentDamageReceiverShape";
    static constexpr const char* ALIAS = NAME;

    Transform transform; // 30
};
RED4EXT_ASSERT_SIZE(EnvironmentDamageReceiverShape, 0x50);
} // namespace game
} // namespace RED4ext
