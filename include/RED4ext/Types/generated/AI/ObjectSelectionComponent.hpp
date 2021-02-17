#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/ent/IComponent.hpp>

namespace RED4ext
{
namespace AI { 
struct ObjectSelectionComponent : ent::IComponent
{
    static constexpr const char* NAME = "AIObjectSelectionComponent";
    static constexpr const char* ALIAS = "ObjectSelectionComponent";

    uint8_t unk90[0x140 - 0x90]; // 90
};
RED4EXT_ASSERT_SIZE(ObjectSelectionComponent, 0x140);
} // namespace AI
using ObjectSelectionComponent = AI::ObjectSelectionComponent;
} // namespace RED4ext
