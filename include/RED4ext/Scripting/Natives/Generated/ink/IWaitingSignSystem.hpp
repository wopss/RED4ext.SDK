#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/ILayerSystem.hpp>

namespace RED4ext
{
namespace ink
{
struct IWaitingSignSystem : ink::ILayerSystem
{
    static constexpr const char* NAME = "inkIWaitingSignSystem";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(IWaitingSignSystem, 0x40);
} // namespace ink
using inkIWaitingSignSystem = ink::IWaitingSignSystem;
} // namespace RED4ext

// clang-format on
