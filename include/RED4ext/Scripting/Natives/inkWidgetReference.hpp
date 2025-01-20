#pragma once

#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>

namespace RED4ext::ink
{
struct Widget;

struct WidgetReference
{
    static constexpr const char* NAME = "inkWidgetReference";
    static constexpr const char* ALIAS = "inkWidgetRef";

    virtual CClass* GetNativeType() {}; // 00
    virtual CClass* GetType() {};       // 08

    WeakHandle<Widget> widget; // 08
};
RED4EXT_ASSERT_SIZE(WidgetReference, 0x18);
} // namespace RED4ext::ink
