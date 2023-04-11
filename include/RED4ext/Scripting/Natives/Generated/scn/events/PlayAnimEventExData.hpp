#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/events/PlayAnimEventData.hpp>

namespace RED4ext
{
namespace scn::events
{
struct PlayAnimEventExData
{
    static constexpr const char* NAME = "scneventsPlayAnimEventExData";
    static constexpr const char* ALIAS = NAME;

    scn::events::PlayAnimEventData basic; // 00
    float weight; // 18
    uint8_t unk1C[0x20 - 0x1C]; // 1C
    CName bodyPartMask; // 20
};
RED4EXT_ASSERT_SIZE(PlayAnimEventExData, 0x28);
} // namespace scn::events
using scneventsPlayAnimEventExData = scn::events::PlayAnimEventExData;
} // namespace RED4ext

// clang-format on
