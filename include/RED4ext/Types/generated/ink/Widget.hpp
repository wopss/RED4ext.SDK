#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>
#include <RED4ext/Types/generated/HDRColor.hpp>
#include <RED4ext/Types/generated/Vector2.hpp>
#include <RED4ext/Types/generated/ink/UITransform.hpp>
#include <RED4ext/Types/generated/ink/WidgetLayout.hpp>

namespace RED4ext
{
namespace ink { struct IEffect; }
namespace ink { struct PropertyManager; }
namespace ink { struct StyleResourceWrapper; }
namespace ink { struct UserData; }
namespace ink { struct Widget; }
namespace ink { struct WidgetLogicController; }

namespace ink { 
struct Widget : IScriptable
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
    uint8_t unk148[0x158 - 0x148]; // 148
    WeakHandle<ink::Widget> parentWidget; // 158
    uint8_t unk168[0x178 - 0x168]; // 168
    CName name; // 178
    CName state; // 180
    Vector2 size; // 188
    uint8_t unk190[0x198 - 0x190]; // 190
    Vector2 renderTransformPivot; // 198
    uint8_t unk1A0[0x1D0 - 0x1A0]; // 1A0
    HDRColor tintColor; // 1D0
    float opacity; // 1E0
    uint8_t unk1E4[0x1E8 - 0x1E4]; // 1E4
    bool visible; // 1E8
    bool canSupportFocus; // 1E9
    bool fitToContent; // 1EA
    bool isInteractive; // 1EB
    bool affectsLayoutWhenHidden; // 1EC
    uint8_t unk1ED[0x1F0 - 0x1ED]; // 1ED
};
RED4EXT_ASSERT_SIZE(Widget, 0x1F0);
} // namespace ink
} // namespace RED4ext
