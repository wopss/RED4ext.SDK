#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Types/generated/EmitterGroupAreaParams.hpp>
#include <RED4ext/Types/generated/EmitterGroupParams.hpp>
#include <RED4ext/Types/generated/IAreaSettings.hpp>

namespace RED4ext
{
struct EmitterGroupAreaSettings : IAreaSettings
{
    static constexpr const char* NAME = "EmitterGroupAreaSettings";
    static constexpr const char* ALIAS = NAME;

    DynArray<EmitterGroupParams> emitterGroupParams; // 48
    DynArray<EmitterGroupAreaParams> EmitterGroupParams; // 58
};
RED4EXT_ASSERT_SIZE(EmitterGroupAreaSettings, 0x68);
} // namespace RED4ext
