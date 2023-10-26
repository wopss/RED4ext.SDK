#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/MeshComponent.hpp>

namespace RED4ext
{
namespace ent
{
struct __declspec(align(0x10)) EditorMeshComponent : ent::MeshComponent
{
    static constexpr const char* NAME = "entEditorMeshComponent";
    static constexpr const char* ALIAS = "EditorMeshComponent";

};
RED4EXT_ASSERT_SIZE(EditorMeshComponent, 0x1E0);
} // namespace ent
using entEditorMeshComponent = ent::EditorMeshComponent;
using EditorMeshComponent = ent::EditorMeshComponent;
} // namespace RED4ext

// clang-format on
