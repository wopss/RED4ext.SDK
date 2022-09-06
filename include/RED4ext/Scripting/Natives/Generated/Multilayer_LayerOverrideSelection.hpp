#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>

namespace RED4ext
{
struct Multilayer_LayerOverrideSelection
{
    static constexpr const char* NAME = "Multilayer_LayerOverrideSelection";
    static constexpr const char* ALIAS = NAME;

    CName colorScale; // 00
    CName normalStrength; // 08
    CName roughLevelsIn; // 10
    CName roughLevelsOut; // 18
    CName metalLevelsIn; // 20
    CName metalLevelsOut; // 28
};
RED4EXT_ASSERT_SIZE(Multilayer_LayerOverrideSelection, 0x30);
} // namespace RED4ext

// clang-format on
