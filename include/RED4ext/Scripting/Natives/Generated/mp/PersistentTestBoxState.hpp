#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/net/IEntityState.hpp>

namespace RED4ext
{
namespace ent { struct IComponent; }
namespace game { struct Object; }
namespace mp { struct PersistentTestBox; }

namespace mp
{
struct PersistentTestBoxState : net::IEntityState
{
    static constexpr const char* NAME = "mpPersistentTestBoxState";
    static constexpr const char* ALIAS = NAME;

    bool isOn; // 50
    uint8_t unk51[0x58 - 0x51]; // 51
    WeakHandle<mp::PersistentTestBox> weakPersistentEntity; // 58
    WeakHandle<ent::IComponent> weakPersistentEntityComponent; // 68
    WeakHandle<game::Object> weakDynamicEntity; // 78
    WeakHandle<ent::IComponent> weakDynamicEntityComponent; // 88
};
RED4EXT_ASSERT_SIZE(PersistentTestBoxState, 0x98);
} // namespace mp
using mpPersistentTestBoxState = mp::PersistentTestBoxState;
} // namespace RED4ext

// clang-format on
