#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
namespace game
{
struct TelemetrySourceEntity
{
    static constexpr const char* NAME = "gameTelemetrySourceEntity";
    static constexpr const char* ALIAS = "TelemetrySourceEntity";

    CString className; // 00
    TweakDBID sourceEntityRecord; // 20
};
RED4EXT_ASSERT_SIZE(TelemetrySourceEntity, 0x28);
} // namespace game
using gameTelemetrySourceEntity = game::TelemetrySourceEntity;
using TelemetrySourceEntity = game::TelemetrySourceEntity;
} // namespace RED4ext

// clang-format on
