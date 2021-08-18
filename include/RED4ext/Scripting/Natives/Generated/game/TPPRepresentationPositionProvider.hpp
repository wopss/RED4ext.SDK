#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/IPositionProvider.hpp>

namespace RED4ext
{
namespace game { 
struct TPPRepresentationPositionProvider : ent::IPositionProvider
{
    static constexpr const char* NAME = "gameTPPRepresentationPositionProvider";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk50[0x60 - 0x50]; // 50
};
RED4EXT_ASSERT_SIZE(TPPRepresentationPositionProvider, 0x60);
} // namespace game
} // namespace RED4ext
