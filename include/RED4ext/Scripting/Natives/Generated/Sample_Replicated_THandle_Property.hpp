#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>

namespace RED4ext
{
struct Sample_Replicated_Serializable;

struct Sample_Replicated_THandle_Property
{
    static constexpr const char* NAME = "Sample_Replicated_THandle_Property";
    static constexpr const char* ALIAS = NAME;

    Handle<Sample_Replicated_Serializable> property; // 00
};
RED4EXT_ASSERT_SIZE(Sample_Replicated_THandle_Property, 0x10);
} // namespace RED4ext

// clang-format on
