#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/MeshComponent.hpp>

namespace RED4ext
{
struct HudMeshComponent : ent::MeshComponent
{
    static constexpr const char* NAME = "HudMeshComponent";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk1D0[0x1F0 - 0x1D0]; // 1D0
};
RED4EXT_ASSERT_SIZE(HudMeshComponent, 0x1F0);
} // namespace RED4ext
