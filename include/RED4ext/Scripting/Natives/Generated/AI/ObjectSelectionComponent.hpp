#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/IComponent.hpp>

namespace RED4ext
{
namespace AI
{
struct ObjectSelectionComponent : ent::IComponent
{
    static constexpr const char* NAME = "AIObjectSelectionComponent";
    static constexpr const char* ALIAS = "ObjectSelectionComponent";

    uint8_t unk90[0x140 - 0x90]; // 90
};
RED4EXT_ASSERT_SIZE(ObjectSelectionComponent, 0x140);
} // namespace AI
using AIObjectSelectionComponent = AI::ObjectSelectionComponent;
using ObjectSelectionComponent = AI::ObjectSelectionComponent;
} // namespace RED4ext

// clang-format on
