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
struct SlotAttachment : ent::ITransformAttachment
{
    static constexpr const char* NAME = "entSlotAttachment";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk58[0x60 - 0x58]; // 58
};
RED4EXT_ASSERT_SIZE(SlotAttachment, 0x60);
} // namespace ent
using entSlotAttachment = ent::SlotAttachment;
} // namespace RED4ext

// clang-format on
