#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector4.hpp>

namespace RED4ext
{
namespace game::ui
{
struct PhoneWaveformData : IScriptable
{
    static constexpr const char* NAME = "gameuiPhoneWaveformData";
    static constexpr const char* ALIAS = NAME;

    DynArray<Vector4> points; // 40
};
RED4EXT_ASSERT_SIZE(PhoneWaveformData, 0x50);
} // namespace game::ui
using gameuiPhoneWaveformData = game::ui::PhoneWaveformData;
} // namespace RED4ext

// clang-format on
