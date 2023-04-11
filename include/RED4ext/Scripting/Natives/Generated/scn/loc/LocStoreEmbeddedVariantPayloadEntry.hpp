#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/loc/VariantId.hpp>

namespace RED4ext
{
namespace scn::loc
{
struct LocStoreEmbeddedVariantPayloadEntry
{
    static constexpr const char* NAME = "scnlocLocStoreEmbeddedVariantPayloadEntry";
    static constexpr const char* ALIAS = NAME;

    scn::loc::VariantId variantId; // 00
    CString content; // 08
};
RED4EXT_ASSERT_SIZE(LocStoreEmbeddedVariantPayloadEntry, 0x28);
} // namespace scn::loc
using scnlocLocStoreEmbeddedVariantPayloadEntry = scn::loc::LocStoreEmbeddedVariantPayloadEntry;
} // namespace RED4ext

// clang-format on
