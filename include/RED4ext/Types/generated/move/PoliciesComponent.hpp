#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Types/generated/ent/IComponent.hpp>

namespace RED4ext
{
namespace move { 
struct PoliciesComponent : ent::IComponent
{
    static constexpr const char* NAME = "movePoliciesComponent";
    static constexpr const char* ALIAS = "MovePoliciesComponent";

    uint8_t unk90[0x770 - 0x90]; // 90
};
RED4EXT_ASSERT_SIZE(PoliciesComponent, 0x770);
} // namespace move
using MovePoliciesComponent = move::PoliciesComponent;
} // namespace RED4ext
