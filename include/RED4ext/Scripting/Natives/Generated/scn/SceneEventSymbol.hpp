#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/NodeId.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/SceneEventId.hpp>

namespace RED4ext
{
namespace scn
{
struct SceneEventSymbol
{
    static constexpr const char* NAME = "scnSceneEventSymbol";
    static constexpr const char* ALIAS = NAME;

    uint64_t editorEventId; // 00
    scn::NodeId originNodeId; // 08
    uint8_t unk0C[0x10 - 0xC]; // C
    DynArray<scn::SceneEventId> sceneEventIds; // 10
};
RED4EXT_ASSERT_SIZE(SceneEventSymbol, 0x20);
} // namespace scn
using scnSceneEventSymbol = scn::SceneEventSymbol;
} // namespace RED4ext

// clang-format on
