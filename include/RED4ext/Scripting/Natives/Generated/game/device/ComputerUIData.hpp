#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/device/GenericDataContent.hpp>

namespace RED4ext
{
namespace game::device
{
struct ComputerUIData
{
    static constexpr const char* NAME = "gamedeviceComputerUIData";
    static constexpr const char* ALIAS = "ComputerUIData";

    DynArray<game::device::GenericDataContent> mails; // 00
    DynArray<game::device::GenericDataContent> files; // 10
};
RED4EXT_ASSERT_SIZE(ComputerUIData, 0x20);
} // namespace game::device
using gamedeviceComputerUIData = game::device::ComputerUIData;
using ComputerUIData = game::device::ComputerUIData;
} // namespace RED4ext

// clang-format on
