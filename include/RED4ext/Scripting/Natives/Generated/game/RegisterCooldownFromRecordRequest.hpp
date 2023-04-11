#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
namespace ent { struct Entity; }
namespace game::data { struct Cooldown_Record; }

namespace game
{
struct RegisterCooldownFromRecordRequest
{
    static constexpr const char* NAME = "gameRegisterCooldownFromRecordRequest";
    static constexpr const char* ALIAS = "RegisterCooldownFromRecordRequest";

    WeakHandle<ent::Entity> owner; // 00
    ItemID ownerItemId; // 10
    TweakDBID ownerRecord; // 20
    Handle<game::data::Cooldown_Record> cooldownRecord; // 28
};
RED4EXT_ASSERT_SIZE(RegisterCooldownFromRecordRequest, 0x38);
} // namespace game
using gameRegisterCooldownFromRecordRequest = game::RegisterCooldownFromRecordRequest;
using RegisterCooldownFromRecordRequest = game::RegisterCooldownFromRecordRequest;
} // namespace RED4ext

// clang-format on
