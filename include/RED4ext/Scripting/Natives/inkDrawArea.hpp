#pragma once

#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector2.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/UITransform.hpp>

namespace RED4ext::ink
{
struct DrawArea
{
    static constexpr const char* NAME = "inkDrawArea";
    static constexpr const char* ALIAS = NAME;

    Vector2 size;             // 00
    float scale;              // 08
    Vector2 relativePosition; // 0C
    Vector2 absolutePosition; // 14
    UITransform transform;    // 1C
};
RED4EXT_ASSERT_SIZE(DrawArea, 0x4C);
} // namespace RED4ext::ink
