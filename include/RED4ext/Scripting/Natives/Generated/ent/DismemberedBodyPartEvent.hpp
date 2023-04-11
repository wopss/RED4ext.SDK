#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>

namespace RED4ext
{
namespace ent
{
struct DismemberedBodyPartEvent : red::Event
{
    static constexpr const char* NAME = "entDismemberedBodyPartEvent";
    static constexpr const char* ALIAS = "DismemberedBodyPartEvent";

#pragma warning(suppress : 4324)
    alignas(8) StaticArray<CName, 32> bones; // 40
};
RED4EXT_ASSERT_SIZE(DismemberedBodyPartEvent, 0x148);
} // namespace ent
using entDismemberedBodyPartEvent = ent::DismemberedBodyPartEvent;
using DismemberedBodyPartEvent = ent::DismemberedBodyPartEvent;
} // namespace RED4ext

// clang-format on
