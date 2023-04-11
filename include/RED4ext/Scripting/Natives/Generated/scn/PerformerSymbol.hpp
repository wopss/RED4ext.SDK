#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/EntityReference.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/PerformerId.hpp>

namespace RED4ext
{
namespace scn
{
struct PerformerSymbol
{
    static constexpr const char* NAME = "scnPerformerSymbol";
    static constexpr const char* ALIAS = NAME;

    scn::PerformerId performerId; // 00
    uint8_t unk04[0x8 - 0x4]; // 4
    game::EntityReference entityRef; // 08
    CRUID editorPerformerId; // 40
};
RED4EXT_ASSERT_SIZE(PerformerSymbol, 0x48);
} // namespace scn
using scnPerformerSymbol = scn::PerformerSymbol;
} // namespace RED4ext

// clang-format on
