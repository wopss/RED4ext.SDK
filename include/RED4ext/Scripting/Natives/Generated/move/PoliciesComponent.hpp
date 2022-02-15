#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/IComponent.hpp>

namespace RED4ext
{
namespace move { 
struct PoliciesComponent : ent::IComponent
{
    static constexpr const char* NAME = "movePoliciesComponent";
    static constexpr const char* ALIAS = "MovePoliciesComponent";

    uint8_t unk90[0x5E0 - 0x90]; // 90
};
RED4EXT_ASSERT_SIZE(PoliciesComponent, 0x5E0);
} // namespace move
using MovePoliciesComponent = move::PoliciesComponent;
} // namespace RED4ext
