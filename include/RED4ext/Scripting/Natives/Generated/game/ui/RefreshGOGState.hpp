#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/OnlineSystemErrors.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/OnlineSystemStatus.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace game::ui
{
struct RefreshGOGState : red::Event
{
    static constexpr const char* NAME = "gameuiRefreshGOGState";
    static constexpr const char* ALIAS = "RefreshGOGState";

    game::OnlineSystemStatus status; // 40
    game::OnlineSystemErrors error; // 44
    CString registerURL; // 48
    DynArray<uint8_t> qrCodePNGBlob; // 68
};
RED4EXT_ASSERT_SIZE(RefreshGOGState, 0x78);
} // namespace game::ui
using gameuiRefreshGOGState = game::ui::RefreshGOGState;
using RefreshGOGState = game::ui::RefreshGOGState;
} // namespace RED4ext

// clang-format on
