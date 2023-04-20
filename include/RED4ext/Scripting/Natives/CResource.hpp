#pragma once

#include <RED4ext/Common.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/ResourcePath.hpp>
#include <RED4ext/Scripting/Natives/Generated/ECookingPlatform.hpp>

namespace RED4ext
{
struct CResource : ISerializable
{
    static constexpr const char* NAME = "CResource";
    static constexpr const char* ALIAS = NAME;

    ResourcePath path;                // 30
    ECookingPlatform cookingPlatform; // 38
};
RED4EXT_ASSERT_SIZE(CResource, 0x40);
} // namespace RED4ext
