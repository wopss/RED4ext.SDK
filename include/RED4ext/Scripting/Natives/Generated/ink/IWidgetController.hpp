#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>

namespace RED4ext
{
namespace ink
{
struct IWidgetController : IScriptable
{
    static constexpr const char* NAME = "inkIWidgetController";
    static constexpr const char* ALIAS = "inkIGameController";

    uint8_t unk40[0x70 - 0x40]; // 40
    CName audioMetadataName; // 70
    uint8_t unk78[0xA8 - 0x78]; // 78
};
RED4EXT_ASSERT_SIZE(IWidgetController, 0xA8);
} // namespace ink
using inkIWidgetController = ink::IWidgetController;
using inkIGameController = ink::IWidgetController;
} // namespace RED4ext

// clang-format on
