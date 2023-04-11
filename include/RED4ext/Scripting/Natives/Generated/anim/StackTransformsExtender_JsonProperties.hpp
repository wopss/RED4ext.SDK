#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/StackTransformsExtender_JsonEntry.hpp>

namespace RED4ext
{
namespace anim
{
struct StackTransformsExtender_JsonProperties : ISerializable
{
    static constexpr const char* NAME = "animStackTransformsExtender_JsonProperties";
    static constexpr const char* ALIAS = NAME;

    DynArray<anim::StackTransformsExtender_JsonEntry> entries; // 30
};
RED4EXT_ASSERT_SIZE(StackTransformsExtender_JsonProperties, 0x40);
} // namespace anim
using animStackTransformsExtender_JsonProperties = anim::StackTransformsExtender_JsonProperties;
} // namespace RED4ext

// clang-format on
