#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>

namespace RED4ext
{
namespace rend
{
struct InfoBox : IScriptable
{
    static constexpr const char* NAME = "rendInfoBox";
    static constexpr const char* ALIAS = "InfoBox";

    uint8_t unk40[0x98 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(InfoBox, 0x98);
} // namespace rend
using rendInfoBox = rend::InfoBox;
using InfoBox = rend::InfoBox;
} // namespace RED4ext

// clang-format on
