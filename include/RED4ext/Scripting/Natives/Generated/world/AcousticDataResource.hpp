#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Scripting/Natives/Generated/res/StreamedResource.hpp>
#include <RED4ext/Scripting/Natives/Generated/world/AcousticDataCell.hpp>

namespace RED4ext
{
namespace world
{
struct AcousticDataResource : res::StreamedResource
{
    static constexpr const char* NAME = "worldAcousticDataResource";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk40[0x48 - 0x40]; // 40
    DynArray<world::AcousticDataCell> cells; // 48
};
RED4EXT_ASSERT_SIZE(AcousticDataResource, 0x58);
} // namespace world
using worldAcousticDataResource = world::AcousticDataResource;
} // namespace RED4ext

// clang-format on
