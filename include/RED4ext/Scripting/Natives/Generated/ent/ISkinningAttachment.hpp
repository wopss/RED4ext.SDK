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
struct ISkinningAttachment : ent::IAttachment
{
    static constexpr const char* NAME = "entISkinningAttachment";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(ISkinningAttachment, 0x50);
} // namespace ent
using entISkinningAttachment = ent::ISkinningAttachment;
} // namespace RED4ext

// clang-format on
