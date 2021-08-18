#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/CResource.hpp>

namespace RED4ext
{
namespace anim { struct AnimSet; }

namespace anim { 
struct AnimSetupResource : CResource
{
    static constexpr const char* NAME = "animAnimSetupResource";
    static constexpr const char* ALIAS = NAME;

    DynArray<Ref<anim::AnimSet>> dependencies; // 40
};
RED4EXT_ASSERT_SIZE(AnimSetupResource, 0x50);
} // namespace anim
} // namespace RED4ext
