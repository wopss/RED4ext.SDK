#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/IAttachment.hpp>

namespace RED4ext
{
namespace world::ui
{
struct MeshTargetAttachment : ent::IAttachment
{
    static constexpr const char* NAME = "worlduiMeshTargetAttachment";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(MeshTargetAttachment, 0x50);
} // namespace world::ui
using worlduiMeshTargetAttachment = world::ui::MeshTargetAttachment;
} // namespace RED4ext

// clang-format on
