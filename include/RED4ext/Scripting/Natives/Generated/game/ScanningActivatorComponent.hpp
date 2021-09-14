#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/IComponent.hpp>

namespace RED4ext
{
namespace game { 
struct ScanningActivatorComponent : ent::IComponent
{
    static constexpr const char* NAME = "gameScanningActivatorComponent";
    static constexpr const char* ALIAS = "ScanningActivatorComponent";

    uint8_t unk90[0x138 - 0x90]; // 90
};
RED4EXT_ASSERT_SIZE(ScanningActivatorComponent, 0x138);
} // namespace game
using ScanningActivatorComponent = game::ScanningActivatorComponent;
} // namespace RED4ext
