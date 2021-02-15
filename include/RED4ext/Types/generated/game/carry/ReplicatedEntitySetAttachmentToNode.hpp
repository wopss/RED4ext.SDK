#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/Transform.hpp>
#include <RED4ext/Types/generated/net/EntityAttachmentInterface.hpp>

namespace RED4ext
{
namespace game::carry { 
struct ReplicatedEntitySetAttachmentToNode : net::EntityAttachmentInterface
{
    static constexpr const char* NAME = "gamecarryReplicatedEntitySetAttachmentToNode";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk18[0x20 - 0x18]; // 18
    Transform localTransform; // 20
};
RED4EXT_ASSERT_SIZE(ReplicatedEntitySetAttachmentToNode, 0x40);
} // namespace game::carry
} // namespace RED4ext
