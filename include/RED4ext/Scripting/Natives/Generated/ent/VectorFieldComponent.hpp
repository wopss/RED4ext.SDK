#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/IVisualComponent.hpp>

namespace RED4ext
{
namespace ent { 
struct VectorFieldComponent : ent::IVisualComponent
{
    static constexpr const char* NAME = "entVectorFieldComponent";
    static constexpr const char* ALIAS = NAME;

    Vector3 direction; // 140
    uint8_t unk14C[0x160 - 0x14C]; // 14C
};
RED4EXT_ASSERT_SIZE(VectorFieldComponent, 0x160);
} // namespace ent
} // namespace RED4ext
