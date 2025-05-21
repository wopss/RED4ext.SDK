#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace world {
enum class ProxyBBoxSyncOptions : int8_t
{
    Do_Nothing = 0,
    Pull = 1,
    Pull_And_Delete = 2,
};
} // namespace world
using worldProxyBBoxSyncOptions = world::ProxyBBoxSyncOptions;
} // namespace RED4ext

// clang-format on
