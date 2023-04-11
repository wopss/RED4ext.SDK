#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>

namespace RED4ext
{
namespace ent { struct Entity; }

namespace game::mappins
{
struct DynamicQuestMappinRepInfo
{
    static constexpr const char* NAME = "gamemappinsDynamicQuestMappinRepInfo";
    static constexpr const char* ALIAS = NAME;

    uint32_t journalPathHash; // 00
    uint8_t unk04[0x8 - 0x4]; // 4
    WeakHandle<ent::Entity> entity; // 08
    uint8_t unk18[0x20 - 0x18]; // 18
};
RED4EXT_ASSERT_SIZE(DynamicQuestMappinRepInfo, 0x20);
} // namespace game::mappins
using gamemappinsDynamicQuestMappinRepInfo = game::mappins::DynamicQuestMappinRepInfo;
} // namespace RED4ext

// clang-format on
