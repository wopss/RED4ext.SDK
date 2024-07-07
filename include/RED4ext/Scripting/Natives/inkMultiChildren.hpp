#pragma once

#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/Children.hpp>

namespace RED4ext::ink
{
struct Widget;

struct MultiChildren : Children
{
    static constexpr const char* NAME = "inkMultiChildren";
    static constexpr const char* ALIAS = NAME;

    SharedSpinLock lock;               // 30
    DynArray<Handle<Widget>> children; // 38
};
RED4EXT_ASSERT_SIZE(MultiChildren, 0x48);
} // namespace RED4ext::ink
