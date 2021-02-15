#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/SimpleTypes.hpp>
#include <RED4ext/Types/generated/CResource.hpp>

namespace RED4ext
{
namespace game { 
struct PersistentStateDataResource : CResource
{
    static constexpr const char* NAME = "gamePersistentStateDataResource";
    static constexpr const char* ALIAS = NAME;

    DataBuffer buffer; // 40
};
RED4EXT_ASSERT_SIZE(PersistentStateDataResource, 0x68);
} // namespace game
} // namespace RED4ext
