#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ISceneStorageCustomData.hpp>

namespace RED4ext
{
struct SceneCustomData_DistantShadowsCommon : ISceneStorageCustomData
{
    static constexpr const char* NAME = "SceneCustomData_DistantShadowsCommon";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk18[0x3E0 - 0x18]; // 18
};
RED4EXT_ASSERT_SIZE(SceneCustomData_DistantShadowsCommon, 0x3E0);
} // namespace RED4ext

// clang-format on
