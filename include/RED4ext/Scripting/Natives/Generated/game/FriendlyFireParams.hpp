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
namespace ent { struct SlotComponent; }
namespace game { struct AttitudeAgent; }

namespace game
{
struct FriendlyFireParams : IScriptable
{
    static constexpr const char* NAME = "gameFriendlyFireParams";
    static constexpr const char* ALIAS = "FriendlyFireParams";

    WeakHandle<game::AttitudeAgent> attitude; // 40
    WeakHandle<ent::SlotComponent> slots; // 50
    uint8_t unk60[0x80 - 0x60]; // 60
    CName attachmentName; // 80
    int32_t slotId; // 88
    uint8_t unk8C[0x90 - 0x8C]; // 8C
    float spread; // 90
    float maxRange; // 94
};
RED4EXT_ASSERT_SIZE(FriendlyFireParams, 0x98);
} // namespace game
using gameFriendlyFireParams = game::FriendlyFireParams;
using FriendlyFireParams = game::FriendlyFireParams;
} // namespace RED4ext

// clang-format on
