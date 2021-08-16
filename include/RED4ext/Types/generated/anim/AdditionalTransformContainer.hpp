#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>

namespace RED4ext
{
namespace anim { struct AdditionalTransformEntry; }

namespace anim { 
struct AdditionalTransformContainer
{
    static constexpr const char* NAME = "animAdditionalTransformContainer";
    static constexpr const char* ALIAS = NAME;

    DynArray<Handle<anim::AdditionalTransformEntry>> entries; // 00
};
RED4EXT_ASSERT_SIZE(AdditionalTransformContainer, 0x10);
} // namespace anim
} // namespace RED4ext
