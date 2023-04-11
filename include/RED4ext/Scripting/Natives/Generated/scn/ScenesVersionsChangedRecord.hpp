#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
namespace scn { struct SceneResource; }

namespace scn
{
struct ScenesVersionsChangedRecord
{
    static constexpr const char* NAME = "scnScenesVersionsChangedRecord";
    static constexpr const char* ALIAS = NAME;

    uint32_t changeInVersion; // 00
    uint8_t unk04[0x8 - 0x4]; // 4
    RaRef<scn::SceneResource> sceneBeforeChange; // 08
};
RED4EXT_ASSERT_SIZE(ScenesVersionsChangedRecord, 0x10);
} // namespace scn
using scnScenesVersionsChangedRecord = scn::ScenesVersionsChangedRecord;
} // namespace RED4ext

// clang-format on
