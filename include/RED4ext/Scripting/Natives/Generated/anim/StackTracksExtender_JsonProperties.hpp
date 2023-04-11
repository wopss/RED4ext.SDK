#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/StackTracksExtender_JsonEntry.hpp>

namespace RED4ext
{
namespace anim
{
struct StackTracksExtender_JsonProperties : ISerializable
{
    static constexpr const char* NAME = "animStackTracksExtender_JsonProperties";
    static constexpr const char* ALIAS = NAME;

    DynArray<anim::StackTracksExtender_JsonEntry> entries; // 30
};
RED4EXT_ASSERT_SIZE(StackTracksExtender_JsonProperties, 0x40);
} // namespace anim
using animStackTracksExtender_JsonProperties = anim::StackTracksExtender_JsonProperties;
} // namespace RED4ext

// clang-format on
