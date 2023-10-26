#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <RED4ext/Scripting/Natives/inkWidget.hpp>

namespace RED4ext
{
RED4EXT_ASSERT_SIZE(ink::Widget, 0x200);
using inkWidget = ink::Widget;
} // namespace RED4ext

/*
#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>
#include <RED4ext/Scripting/Natives/Generated/HDRColor.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector2.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/UITransform.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/WidgetLayout.hpp>

namespace RED4ext
{
namespace ink { struct IEffect; }
namespace ink { struct PropertyManager; }
namespace ink { struct StyleResourceWrapper; }
namespace ink { struct UserData; }
namespace ink { struct WidgetLogicController; }

namespace ink
{
struct __declspec(align(0x10)) Widget : IScriptable
{
    static constexpr const char* NAME = "inkWidget";
    static constexpr const char* ALIAS = NAME;

    Handle<ink::PropertyManager> propertyManager; // 40
    uint8_t unk50[0x88 - 0x50]; // 50
    ink::WidgetLayout layout; // 88
    ink::UITransform renderTransform; // B8
    uint8_t unkE8[0xF8 - 0xE8]; // E8
    DynArray<Handle<ink::UserData>> userData; // F8
    DynArray<Handle<ink::WidgetLogicController>> secondaryControllers; // 108
    DynArray<Handle<ink::IEffect>> effects; // 118
    Handle<ink::WidgetLogicController> logicController; // 128
    Handle<ink::StyleResourceWrapper> style; // 138
    uint8_t unk148[0x168 - 0x148]; // 148
    WeakHandle<ink::Widget> parentWidget; // 168
    uint8_t unk178[0x188 - 0x178]; // 178
    CName name; // 188
    CName state; // 190
    Vector2 size; // 198
    uint8_t unk1A0[0x1A8 - 0x1A0]; // 1A0
    Vector2 renderTransformPivot; // 1A8
    uint8_t unk1B0[0x1E0 - 0x1B0]; // 1B0
    HDRColor tintColor; // 1E0
    float opacity; // 1F0
    uint8_t unk1F4[0x1F8 - 0x1F4]; // 1F4
    bool visible; // 1F8
    bool canSupportFocus; // 1F9
    bool fitToContent; // 1FA
    bool isInteractive; // 1FB
    bool affectsLayoutWhenHidden; // 1FC
    uint8_t unk1FD[0x200 - 0x1FD]; // 1FD
};
RED4EXT_ASSERT_SIZE(Widget, 0x200);
} // namespace ink
using inkWidget = ink::Widget;
} // namespace RED4ext
*/

// clang-format on
