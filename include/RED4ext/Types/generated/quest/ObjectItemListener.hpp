#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Types/generated/game/IInventoryListener.hpp>

namespace RED4ext
{
namespace quest { 
struct ObjectItemListener : game::IInventoryListener
{
    static constexpr const char* NAME = "questObjectItemListener";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk40[0x50 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(ObjectItemListener, 0x50);
} // namespace quest
} // namespace RED4ext
