#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/ISerializable.hpp>

namespace RED4ext
{
namespace scn { 
struct IGameplayActionData : ISerializable
{
    static constexpr const char* NAME = "scnIGameplayActionData";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(IGameplayActionData, 0x30);
} // namespace scn
} // namespace RED4ext
