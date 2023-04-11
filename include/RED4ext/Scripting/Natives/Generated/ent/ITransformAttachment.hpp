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
struct ITransformAttachment : ent::IAttachment
{
    static constexpr const char* NAME = "entITransformAttachment";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk50[0x58 - 0x50]; // 50
};
RED4EXT_ASSERT_SIZE(ITransformAttachment, 0x58);
} // namespace ent
using entITransformAttachment = ent::ITransformAttachment;
} // namespace RED4ext

// clang-format on
