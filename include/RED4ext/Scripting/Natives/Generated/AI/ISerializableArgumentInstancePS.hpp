#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/ArgumentInstancePS.hpp>

namespace RED4ext
{
struct ISerializable;

namespace AI
{
struct ISerializableArgumentInstancePS : AI::ArgumentInstancePS
{
    static constexpr const char* NAME = "AIISerializableArgumentInstancePS";
    static constexpr const char* ALIAS = NAME;

    Handle<ISerializable> value; // 38
};
RED4EXT_ASSERT_SIZE(ISerializableArgumentInstancePS, 0x48);
} // namespace AI
using AIISerializableArgumentInstancePS = AI::ISerializableArgumentInstancePS;
} // namespace RED4ext

// clang-format on
