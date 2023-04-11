#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/loc/LocaleId.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/loc/LocstringId.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/loc/Signature.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/loc/VariantId.hpp>

namespace RED4ext
{
namespace scn::loc
{
struct LocStoreEmbeddedVariantDescriptorEntry
{
    static constexpr const char* NAME = "scnlocLocStoreEmbeddedVariantDescriptorEntry";
    static constexpr const char* ALIAS = NAME;

    scn::loc::VariantId variantId; // 00
    scn::loc::LocstringId locstringId; // 08
    scn::loc::LocaleId localeId; // 10
    uint8_t unk11[0x18 - 0x11]; // 11
    scn::loc::Signature signature; // 18
    uint32_t vpeIndex; // 20
    uint8_t unk24[0x28 - 0x24]; // 24
};
RED4EXT_ASSERT_SIZE(LocStoreEmbeddedVariantDescriptorEntry, 0x28);
} // namespace scn::loc
using scnlocLocStoreEmbeddedVariantDescriptorEntry = scn::loc::LocStoreEmbeddedVariantDescriptorEntry;
} // namespace RED4ext

// clang-format on
