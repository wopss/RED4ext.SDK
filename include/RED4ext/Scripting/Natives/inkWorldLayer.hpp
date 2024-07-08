#pragma once

#include <RED4ext/Common.hpp>
#include <RED4ext/Memory/SharedPtr.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/Layer.hpp>

namespace RED4ext::ink
{
struct IWidgetComponentWrapper;

struct WorldLayer : ink::Layer
{
    static constexpr const char* NAME = "inkWorldLayer";
    static constexpr const char* ALIAS = NAME;

    SharedSpinLock unk150;                                   // 150
    DynArray<void*> unk158;                                  // 158
    SharedSpinLock unk168;                                   // 168
    DynArray<SharedPtr<IWidgetComponentWrapper>> components; // 170
    uint8_t unk180[0x1B8 - 0x180];                           // 180
};
RED4EXT_ASSERT_SIZE(WorldLayer, 0x1B8);
} // namespace RED4ext::ink
