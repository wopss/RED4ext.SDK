#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ITonemappingMode.hpp>
#include <RED4ext/Scripting/Natives/Generated/STonemappingACESParams.hpp>

namespace RED4ext
{
struct TonemappingModeACES : ITonemappingMode
{
    static constexpr const char* NAME = "TonemappingModeACES";
    static constexpr const char* ALIAS = NAME;

    STonemappingACESParams params; // D8
};
RED4EXT_ASSERT_SIZE(TonemappingModeACES, 0x100);
} // namespace RED4ext

// clang-format on
