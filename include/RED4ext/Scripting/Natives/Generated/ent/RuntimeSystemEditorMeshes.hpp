#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/IRuntimeSystem.hpp>

namespace RED4ext
{
namespace ent
{
struct RuntimeSystemEditorMeshes : world::IRuntimeSystem
{
    static constexpr const char* NAME = "entRuntimeSystemEditorMeshes";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk48[0x88 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(RuntimeSystemEditorMeshes, 0x88);
} // namespace ent
using entRuntimeSystemEditorMeshes = ent::RuntimeSystemEditorMeshes;
} // namespace RED4ext

// clang-format on
