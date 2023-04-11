#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/IAttachment.hpp>

namespace RED4ext
{
namespace game
{
struct EffectAttachment : ent::IAttachment
{
    static constexpr const char* NAME = "gameEffectAttachment";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(EffectAttachment, 0x50);
} // namespace game
using gameEffectAttachment = game::EffectAttachment;
} // namespace RED4ext

// clang-format on
