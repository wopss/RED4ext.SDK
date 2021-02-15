#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Types/SimpleTypes.hpp>
#include <RED4ext/Types/generated/red/Event.hpp>

namespace RED4ext
{
namespace ent { 
struct DismemberedBodyPartEvent : red::Event
{
    static constexpr const char* NAME = "entDismemberedBodyPartEvent";
    static constexpr const char* ALIAS = "DismemberedBodyPartEvent";

    alignas(8) StaticArray<CName, 32> bones; // 40
};
RED4EXT_ASSERT_SIZE(DismemberedBodyPartEvent, 0x148);
} // namespace ent
using DismemberedBodyPartEvent = ent::DismemberedBodyPartEvent;
} // namespace RED4ext
