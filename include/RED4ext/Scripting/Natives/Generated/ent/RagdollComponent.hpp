#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/IComponent.hpp>

namespace RED4ext
{
namespace ent
{
struct __declspec(align(0x10)) RagdollComponent : ent::IComponent
{
    static constexpr const char* NAME = "entRagdollComponent";
    static constexpr const char* ALIAS = "RagdollComponent";

    uint8_t unk90[0x220 - 0x90]; // 90
};
RED4EXT_ASSERT_SIZE(RagdollComponent, 0x220);
} // namespace ent
using entRagdollComponent = ent::RagdollComponent;
using RagdollComponent = ent::RagdollComponent;
} // namespace RED4ext

// clang-format on
