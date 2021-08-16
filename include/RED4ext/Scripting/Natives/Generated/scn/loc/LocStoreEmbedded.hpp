#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/loc/LocStoreEmbeddedVariantDescriptorEntry.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/loc/LocStoreEmbeddedVariantPayloadEntry.hpp>

namespace RED4ext
{
namespace scn::loc { 
struct LocStoreEmbedded
{
    static constexpr const char* NAME = "scnlocLocStoreEmbedded";
    static constexpr const char* ALIAS = NAME;

    DynArray<scn::loc::LocStoreEmbeddedVariantDescriptorEntry> vdEntries; // 00
    DynArray<scn::loc::LocStoreEmbeddedVariantPayloadEntry> vpEntries; // 10
};
RED4EXT_ASSERT_SIZE(LocStoreEmbedded, 0x20);
} // namespace scn::loc
} // namespace RED4ext
