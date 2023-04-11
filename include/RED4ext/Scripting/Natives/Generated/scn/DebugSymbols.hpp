#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/NodeSymbol.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/PerformerSymbol.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/SceneEventSymbol.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/WorkspotSymbol.hpp>

namespace RED4ext
{
namespace scn
{
struct DebugSymbols
{
    static constexpr const char* NAME = "scnDebugSymbols";
    static constexpr const char* ALIAS = NAME;

    DynArray<scn::PerformerSymbol> performersDebugSymbols; // 00
    DynArray<scn::WorkspotSymbol> workspotsDebugSymbols; // 10
    DynArray<scn::SceneEventSymbol> sceneEventsDebugSymbols; // 20
    DynArray<scn::NodeSymbol> sceneNodesDebugSymbols; // 30
};
RED4EXT_ASSERT_SIZE(DebugSymbols, 0x40);
} // namespace scn
using scnDebugSymbols = scn::DebugSymbols;
} // namespace RED4ext

// clang-format on
