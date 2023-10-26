#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/MeshComponent.hpp>

namespace RED4ext
{
struct __declspec(align(0x10)) HudMeshComponent : ent::MeshComponent
{
    static constexpr const char* NAME = "HudMeshComponent";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk1E0[0x200 - 0x1E0]; // 1E0
};
RED4EXT_ASSERT_SIZE(HudMeshComponent, 0x200);
} // namespace RED4ext

// clang-format on
