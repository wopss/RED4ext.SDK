#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/IAttachment.hpp>

namespace RED4ext
{
namespace ent
{
struct AnimationFloatTrackAttachment : ent::IAttachment
{
    static constexpr const char* NAME = "entAnimationFloatTrackAttachment";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk50[0x68 - 0x50]; // 50
};
RED4EXT_ASSERT_SIZE(AnimationFloatTrackAttachment, 0x68);
} // namespace ent
using entAnimationFloatTrackAttachment = ent::AnimationFloatTrackAttachment;
} // namespace RED4ext

// clang-format on
