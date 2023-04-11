#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ScanningEvent.hpp>

namespace RED4ext
{
namespace game
{
struct ScanningEventForInstigator : game::ScanningEvent
{
    static constexpr const char* NAME = "gameScanningEventForInstigator";
    static constexpr const char* ALIAS = "ScanningEventForInstigator";

};
RED4EXT_ASSERT_SIZE(ScanningEventForInstigator, 0x48);
} // namespace game
using gameScanningEventForInstigator = game::ScanningEventForInstigator;
using ScanningEventForInstigator = game::ScanningEventForInstigator;
} // namespace RED4ext

// clang-format on
