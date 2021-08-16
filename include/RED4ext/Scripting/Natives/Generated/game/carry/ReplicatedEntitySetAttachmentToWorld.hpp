#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Transform.hpp>
#include <RED4ext/Scripting/Natives/Generated/net/EntityAttachmentInterface.hpp>

namespace RED4ext
{
namespace game::carry { 
struct ReplicatedEntitySetAttachmentToWorld : net::EntityAttachmentInterface
{
    static constexpr const char* NAME = "gamecarryReplicatedEntitySetAttachmentToWorld";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk18[0x20 - 0x18]; // 18
    Transform localTransform; // 20
};
RED4EXT_ASSERT_SIZE(ReplicatedEntitySetAttachmentToWorld, 0x40);
} // namespace game::carry
} // namespace RED4ext
