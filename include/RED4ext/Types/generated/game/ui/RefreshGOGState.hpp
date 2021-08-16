#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Types/SimpleTypes.hpp>
#include <RED4ext/Types/generated/game/GOGRewardsSystemErrors.hpp>
#include <RED4ext/Types/generated/game/GOGRewardsSystemStatus.hpp>
#include <RED4ext/Types/generated/red/Event.hpp>

namespace RED4ext
{
namespace game::ui { 
struct RefreshGOGState : red::Event
{
    static constexpr const char* NAME = "gameuiRefreshGOGState";
    static constexpr const char* ALIAS = "RefreshGOGState";

    game::GOGRewardsSystemStatus status; // 40
    game::GOGRewardsSystemErrors error; // 44
    CString registerURL; // 48
    DynArray<uint8_t> qrCodePNGBlob; // 68
};
RED4EXT_ASSERT_SIZE(RefreshGOGState, 0x78);
} // namespace game::ui
using RefreshGOGState = game::ui::RefreshGOGState;
} // namespace RED4ext
