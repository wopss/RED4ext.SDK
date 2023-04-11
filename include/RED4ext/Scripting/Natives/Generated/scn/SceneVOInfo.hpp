#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>

namespace RED4ext
{
namespace scn
{
struct SceneVOInfo
{
    static constexpr const char* NAME = "scnSceneVOInfo";
    static constexpr const char* ALIAS = NAME;

    CName inVoTrigger; // 00
    CName outVoTrigger; // 08
    float duration; // 10
    uint16_t id; // 14
    uint8_t unk16[0x18 - 0x16]; // 16
};
RED4EXT_ASSERT_SIZE(SceneVOInfo, 0x18);
} // namespace scn
using scnSceneVOInfo = scn::SceneVOInfo;
} // namespace RED4ext

// clang-format on
