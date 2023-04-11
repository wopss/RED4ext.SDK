#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/ITransformAttachment.hpp>

namespace RED4ext
{
namespace ent
{
struct HardAttachment : ent::ITransformAttachment
{
    static constexpr const char* NAME = "entHardAttachment";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(HardAttachment, 0x58);
} // namespace ent
using entHardAttachment = ent::HardAttachment;
} // namespace RED4ext

// clang-format on
