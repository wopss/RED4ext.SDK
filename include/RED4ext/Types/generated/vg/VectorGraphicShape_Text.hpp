#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Types/SimpleTypes.hpp>
#include <RED4ext/Types/generated/vg/BaseVectorGraphicShape.hpp>

namespace RED4ext
{
namespace vg { 
struct VectorGraphicShape_Text : vg::BaseVectorGraphicShape
{
    static constexpr const char* NAME = "vgVectorGraphicShape_Text";
    static constexpr const char* ALIAS = NAME;

    CString xt; // C0
};
RED4EXT_ASSERT_SIZE(VectorGraphicShape_Text, 0xE0);
} // namespace vg
} // namespace RED4ext
