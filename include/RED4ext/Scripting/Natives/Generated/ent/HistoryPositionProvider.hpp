#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/IPositionProvider.hpp>

namespace RED4ext
{
namespace ent { 
struct HistoryPositionProvider : ent::IPositionProvider
{
    static constexpr const char* NAME = "entHistoryPositionProvider";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk50[0x80 - 0x50]; // 50
};
RED4EXT_ASSERT_SIZE(HistoryPositionProvider, 0x80);
} // namespace ent
} // namespace RED4ext
