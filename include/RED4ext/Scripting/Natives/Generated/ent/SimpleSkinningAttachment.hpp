#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/ISkinningAttachment.hpp>

namespace RED4ext
{
namespace ent
{
struct SimpleSkinningAttachment : ent::ISkinningAttachment
{
    static constexpr const char* NAME = "entSimpleSkinningAttachment";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(SimpleSkinningAttachment, 0x50);
} // namespace ent
using entSimpleSkinningAttachment = ent::SimpleSkinningAttachment;
} // namespace RED4ext

// clang-format on
