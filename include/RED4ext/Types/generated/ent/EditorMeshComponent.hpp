#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Types/generated/ent/MeshComponent.hpp>

namespace RED4ext
{
namespace ent { 
struct EditorMeshComponent : ent::MeshComponent
{
    static constexpr const char* NAME = "entEditorMeshComponent";
    static constexpr const char* ALIAS = "EditorMeshComponent";

};
RED4EXT_ASSERT_SIZE(EditorMeshComponent, 0x1D0);
} // namespace ent
using EditorMeshComponent = ent::EditorMeshComponent;
} // namespace RED4ext
