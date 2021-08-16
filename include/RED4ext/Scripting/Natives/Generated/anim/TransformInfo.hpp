#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/QsTransform.hpp>

namespace RED4ext
{
namespace anim { 
struct TransformInfo
{
    static constexpr const char* NAME = "animTransformInfo";
    static constexpr const char* ALIAS = NAME;

    CName name; // 00
    CName parentName; // 08
    QsTransform referenceTransformLs; // 10
};
RED4EXT_ASSERT_SIZE(TransformInfo, 0x40);
} // namespace anim
} // namespace RED4ext
