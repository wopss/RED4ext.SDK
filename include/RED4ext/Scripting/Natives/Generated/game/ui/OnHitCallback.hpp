#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/CallbackBase.hpp>

namespace RED4ext
{
namespace game::ui { 
struct OnHitCallback : ink::CallbackBase
{
    static constexpr const char* NAME = "gameuiOnHitCallback";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk28[0x38 - 0x28]; // 28
};
RED4EXT_ASSERT_SIZE(OnHitCallback, 0x38);
} // namespace game::ui
} // namespace RED4ext
