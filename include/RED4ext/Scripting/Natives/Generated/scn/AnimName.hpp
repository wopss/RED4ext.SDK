#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/AnimNameType.hpp>

namespace RED4ext
{
namespace scn
{
struct AnimName : ISerializable
{
    static constexpr const char* NAME = "scnAnimName";
    static constexpr const char* ALIAS = NAME;

    scn::AnimNameType type; // 30
    uint8_t unk34[0x48 - 0x34]; // 34
};
RED4EXT_ASSERT_SIZE(AnimName, 0x48);
} // namespace scn
using scnAnimName = scn::AnimName;
} // namespace RED4ext

// clang-format on
