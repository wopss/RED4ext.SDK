#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/IComponent.hpp>

namespace RED4ext
{
namespace ent { 
struct RagdollComponent : ent::IComponent
{
    static constexpr const char* NAME = "entRagdollComponent";
    static constexpr const char* ALIAS = "RagdollComponent";

    uint8_t unk90[0x210 - 0x90]; // 90
};
RED4EXT_ASSERT_SIZE(RagdollComponent, 0x210);
} // namespace ent
using RagdollComponent = ent::RagdollComponent;
} // namespace RED4ext
