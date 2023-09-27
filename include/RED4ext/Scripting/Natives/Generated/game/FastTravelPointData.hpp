#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/EntityID.hpp>

namespace RED4ext
{
namespace game
{
struct FastTravelPointData : IScriptable
{
    static constexpr const char* NAME = "gameFastTravelPointData";
    static constexpr const char* ALIAS = "FastTravelPointData";

    TweakDBID pointRecord; // 40
    NodeRef markerRef; // 48
    ent::EntityID requesterID; // 50
    bool isEP1; // 58
    uint8_t unk59[0x60 - 0x59]; // 59
};
RED4EXT_ASSERT_SIZE(FastTravelPointData, 0x60);
} // namespace game
using gameFastTravelPointData = game::FastTravelPointData;
using FastTravelPointData = game::FastTravelPointData;
} // namespace RED4ext

// clang-format on
