#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/RidResourceId.hpp>

namespace RED4ext
{
namespace scn { struct RidResource; }

namespace scn
{
struct RidResourceHandler
{
    static constexpr const char* NAME = "scnRidResourceHandler";
    static constexpr const char* ALIAS = NAME;

    scn::RidResourceId id; // 00
    uint8_t unk04[0x8 - 0x4]; // 4
    Ref<scn::RidResource> ridResource; // 08
};
RED4EXT_ASSERT_SIZE(RidResourceHandler, 0x20);
} // namespace scn
using scnRidResourceHandler = scn::RidResourceHandler;
} // namespace RED4ext

// clang-format on
