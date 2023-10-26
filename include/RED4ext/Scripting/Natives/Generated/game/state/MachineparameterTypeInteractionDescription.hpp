#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>

namespace RED4ext
{
namespace ent { struct Entity; }

namespace game::state
{
struct __declspec(align(0x10)) MachineparameterTypeInteractionDescription : IScriptable
{
    static constexpr const char* NAME = "gamestateMachineparameterTypeInteractionDescription";
    static constexpr const char* ALIAS = NAME;

    WeakHandle<ent::Entity> interactionEntity; // 40
    uint8_t unk50[0x60 - 0x50]; // 50
    CName interactionType; // 60
    uint8_t unk68[0x90 - 0x68]; // 68
};
RED4EXT_ASSERT_SIZE(MachineparameterTypeInteractionDescription, 0x90);
} // namespace game::state
using gamestateMachineparameterTypeInteractionDescription = game::state::MachineparameterTypeInteractionDescription;
} // namespace RED4ext

// clang-format on
