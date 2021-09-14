#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>

namespace RED4ext
{
namespace ink { 
struct IWidgetController : IScriptable
{
    static constexpr const char* NAME = "inkIWidgetController";
    static constexpr const char* ALIAS = "inkIGameController";

    uint8_t unk40[0x60 - 0x40]; // 40
    CName audioMetadataName; // 60
    uint8_t unk68[0x98 - 0x68]; // 68
};
RED4EXT_ASSERT_SIZE(IWidgetController, 0x98);
} // namespace ink
using inkIGameController = ink::IWidgetController;
} // namespace RED4ext
