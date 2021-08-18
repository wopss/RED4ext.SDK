#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
struct JsonResource;

namespace loc { 
struct VoLanguageDataEntry
{
    static constexpr const char* NAME = "locVoLanguageDataEntry";
    static constexpr const char* ALIAS = NAME;

    CName languageCode; // 00
    RaRef<JsonResource> voiceverMapReport; // 08
    RaRef<JsonResource> lenghtMapReport; // 10
    DynArray<RaRef<JsonResource>> voMapChunks; // 18
};
RED4EXT_ASSERT_SIZE(VoLanguageDataEntry, 0x28);
} // namespace loc
} // namespace RED4ext
