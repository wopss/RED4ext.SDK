#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/EntityID.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game
{
struct ScanningLookAtEvent : red::Event
{
    static constexpr const char* NAME = "gameScanningLookAtEvent";
    static constexpr const char* ALIAS = "ScanningLookAtEvent";

    ent::EntityID ownerID; // 40
    bool state; // 48
    uint8_t unk49[0x50 - 0x49]; // 49
};
RED4EXT_ASSERT_SIZE(ScanningLookAtEvent, 0x50);
} // namespace game
using gameScanningLookAtEvent = game::ScanningLookAtEvent;
using ScanningLookAtEvent = game::ScanningLookAtEvent;
} // namespace RED4ext

// clang-format on
