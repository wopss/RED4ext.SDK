#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/ISourceBinding.hpp>

namespace RED4ext
{
namespace world::ui
{
struct MeshTargetBinding : ent::ISourceBinding
{
    static constexpr const char* NAME = "worlduiMeshTargetBinding";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(MeshTargetBinding, 0x70);
} // namespace world::ui
using worlduiMeshTargetBinding = world::ui::MeshTargetBinding;
} // namespace RED4ext

// clang-format on
