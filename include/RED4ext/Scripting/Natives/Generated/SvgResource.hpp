#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/CResource.hpp>

namespace RED4ext
{
namespace vg { struct VectorGraphicDefinition; }

struct SvgResource : CResource
{
    static constexpr const char* NAME = "SvgResource";
    static constexpr const char* ALIAS = NAME;

    Handle<vg::VectorGraphicDefinition> vectorGraphicDef; // 40
};
RED4EXT_ASSERT_SIZE(SvgResource, 0x50);
} // namespace RED4ext

// clang-format on
