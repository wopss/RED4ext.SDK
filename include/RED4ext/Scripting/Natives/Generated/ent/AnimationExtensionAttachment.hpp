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
struct AnimationExtensionAttachment : ent::IAttachment
{
    static constexpr const char* NAME = "entAnimationExtensionAttachment";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(AnimationExtensionAttachment, 0x50);
} // namespace ent
using entAnimationExtensionAttachment = ent::AnimationExtensionAttachment;
} // namespace RED4ext

// clang-format on
