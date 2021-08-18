#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/IVisualComponent.hpp>

namespace RED4ext
{
struct CMesh;

namespace ent { 
struct ClothComponent : ent::IVisualComponent
{
    static constexpr const char* NAME = "entClothComponent";
    static constexpr const char* ALIAS = NAME;

    Ref<CMesh> mesh; // 140
    uint8_t unk158[0x160 - 0x158]; // 158
};
RED4EXT_ASSERT_SIZE(ClothComponent, 0x160);
} // namespace ent
} // namespace RED4ext
