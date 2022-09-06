#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/IAreaSettings.hpp>

namespace RED4ext
{
struct ITonemappingMode;

struct TonemappingAreaSettings : IAreaSettings
{
    static constexpr const char* NAME = "TonemappingAreaSettings";
    static constexpr const char* ALIAS = NAME;

    Handle<ITonemappingMode> mode; // 48
    Handle<ITonemappingMode> hdrMode; // 58
};
RED4EXT_ASSERT_SIZE(TonemappingAreaSettings, 0x68);
} // namespace RED4ext

// clang-format on
