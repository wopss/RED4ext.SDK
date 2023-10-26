#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/Transform.hpp>
#include <RED4ext/Scripting/Natives/Generated/net/EntityAttachmentInterface.hpp>

namespace RED4ext
{
namespace ent { struct Entity; }

namespace game::carry
{
struct __declspec(align(0x10)) ReplicatedEntitySetAttachmentToEntity : net::EntityAttachmentInterface
{
    static constexpr const char* NAME = "gamecarryReplicatedEntitySetAttachmentToEntity";
    static constexpr const char* ALIAS = NAME;

    WeakHandle<ent::Entity> entity; // 18
    CName slot; // 28
    Transform localTransform; // 30
};
RED4EXT_ASSERT_SIZE(ReplicatedEntitySetAttachmentToEntity, 0x50);
} // namespace game::carry
using gamecarryReplicatedEntitySetAttachmentToEntity = game::carry::ReplicatedEntitySetAttachmentToEntity;
} // namespace RED4ext

// clang-format on
