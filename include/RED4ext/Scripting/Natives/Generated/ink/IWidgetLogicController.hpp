#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <RED4ext/Scripting/Natives/inkIWidgetLogicController.hpp>

namespace RED4ext
{
RED4EXT_ASSERT_SIZE(ink::IWidgetLogicController, 0x78);
using inkIWidgetLogicController = ink::IWidgetLogicController;
using inkILogicController = ink::IWidgetLogicController;
} // namespace RED4ext

/*
#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>

namespace RED4ext
{
namespace ink { struct Widget; }

namespace ink
{
struct IWidgetLogicController : IScriptable
{
    static constexpr const char* NAME = "inkIWidgetLogicController";
    static constexpr const char* ALIAS = "inkILogicController";

    WeakHandle<ink::Widget> widget; // 40
    uint8_t unk50[0x70 - 0x50]; // 50
    CName audioMetadataName; // 70
};
RED4EXT_ASSERT_SIZE(IWidgetLogicController, 0x78);
} // namespace ink
using inkIWidgetLogicController = ink::IWidgetLogicController;
using inkILogicController = ink::IWidgetLogicController;
} // namespace RED4ext
*/

// clang-format on
