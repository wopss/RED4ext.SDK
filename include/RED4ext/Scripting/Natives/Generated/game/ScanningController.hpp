#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>

namespace RED4ext
{
namespace game { 
struct ScanningController : IScriptable
{
    static constexpr const char* NAME = "gameScanningController";
    static constexpr const char* ALIAS = "ScanningController";

    uint8_t unk40[0x3308 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(ScanningController, 0x3308);
} // namespace game
using ScanningController = game::ScanningController;
} // namespace RED4ext
