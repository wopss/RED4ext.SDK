#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/Scripting/Natives/Generated/Box.hpp>

namespace RED4ext
{
struct ParticleDamage : ISerializable
{
    static constexpr const char* NAME = "ParticleDamage";
    static constexpr const char* ALIAS = NAME;

    DynArray<Box> boundingBoxes; // 30
};
RED4EXT_ASSERT_SIZE(ParticleDamage, 0x40);
} // namespace RED4ext

// clang-format on
