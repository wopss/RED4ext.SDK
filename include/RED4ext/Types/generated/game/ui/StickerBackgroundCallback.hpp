#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/ink/CallbackBase.hpp>

namespace RED4ext
{
namespace game::ui { 
struct StickerBackgroundCallback : ink::CallbackBase
{
    static constexpr const char* NAME = "gameuiStickerBackgroundCallback";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk28[0x38 - 0x28]; // 28
};
RED4EXT_ASSERT_SIZE(StickerBackgroundCallback, 0x38);
} // namespace game::ui
} // namespace RED4ext
