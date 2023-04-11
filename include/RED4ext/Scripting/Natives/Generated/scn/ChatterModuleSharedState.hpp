#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/ISerializable.hpp>

namespace RED4ext
{
namespace scn { struct Chatter; }

namespace scn
{
struct ChatterModuleSharedState : ISerializable
{
    static constexpr const char* NAME = "scnChatterModuleSharedState";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk30[0x38 - 0x30]; // 30
    DynArray<Handle<scn::Chatter>> chatterHistory; // 38
    uint8_t unk48[0x50 - 0x48]; // 48
};
RED4EXT_ASSERT_SIZE(ChatterModuleSharedState, 0x50);
} // namespace scn
using scnChatterModuleSharedState = scn::ChatterModuleSharedState;
} // namespace RED4ext

// clang-format on
