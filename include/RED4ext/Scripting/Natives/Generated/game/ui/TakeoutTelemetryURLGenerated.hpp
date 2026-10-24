#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Containers/DynArray.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game::ui
{
struct TakeoutTelemetryURLGenerated : red::Event
{
    static constexpr const char* NAME = "gameuiTakeoutTelemetryURLGenerated";
    static constexpr const char* ALIAS = "TakeoutTelemetryURLGenerated";

    CString takeoutURL; // 40
    DynArray<uint8_t> qrCodePNGBlob; // 60
};
RED4EXT_ASSERT_SIZE(TakeoutTelemetryURLGenerated, 0x70);
} // namespace game::ui
using gameuiTakeoutTelemetryURLGenerated = game::ui::TakeoutTelemetryURLGenerated;
using TakeoutTelemetryURLGenerated = game::ui::TakeoutTelemetryURLGenerated;
} // namespace RED4ext

// clang-format on
