#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/effect/Spawner.hpp>

namespace RED4ext
{
namespace effect { 
struct VisualComponentSpawner : effect::Spawner
{
    static constexpr const char* NAME = "effectVisualComponentSpawner";
    static constexpr const char* ALIAS = NAME;

    DynArray<CName> componentName; // 30
};
RED4EXT_ASSERT_SIZE(VisualComponentSpawner, 0x40);
} // namespace effect
} // namespace RED4ext
