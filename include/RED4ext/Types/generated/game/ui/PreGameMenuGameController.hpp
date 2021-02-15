#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/game/ui/BaseMenuGameController.hpp>

namespace RED4ext
{
namespace game::ui { 
struct PreGameMenuGameController : game::ui::BaseMenuGameController
{
    static constexpr const char* NAME = "gameuiPreGameMenuGameController";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk130[0x138 - 0x130]; // 130
};
RED4EXT_ASSERT_SIZE(PreGameMenuGameController, 0x138);
} // namespace game::ui
} // namespace RED4ext
