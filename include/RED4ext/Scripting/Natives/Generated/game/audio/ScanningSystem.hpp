#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/audio/IScanningSystem.hpp>

namespace RED4ext
{
namespace game::audio
{
struct ScanningSystem : game::audio::IScanningSystem
{
    static constexpr const char* NAME = "gameaudioScanningSystem";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk48[0x80 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(ScanningSystem, 0x80);
} // namespace game::audio
using gameaudioScanningSystem = game::audio::ScanningSystem;
} // namespace RED4ext

// clang-format on
