#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>

namespace RED4ext
{
namespace game
{
struct CookedDeviceData
{
    static constexpr const char* NAME = "gameCookedDeviceData";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk00[0x8 - 0x0]; // 0
    CName className; // 08
    DynArray<uint64_t> children; // 10
    DynArray<uint64_t> parents; // 20
    Vector3 nodePosition; // 30
    uint8_t unk3C[0x40 - 0x3C]; // 3C
};
RED4EXT_ASSERT_SIZE(CookedDeviceData, 0x40);
} // namespace game
using gameCookedDeviceData = game::CookedDeviceData;
} // namespace RED4ext

// clang-format on
