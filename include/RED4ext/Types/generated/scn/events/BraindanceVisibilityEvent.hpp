#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/ECustomMaterialParam.hpp>
#include <RED4ext/Types/generated/WorldRenderAreaSettings.hpp>
#include <RED4ext/Types/generated/scn/PerformerId.hpp>
#include <RED4ext/Types/generated/scn/SceneEvent.hpp>

namespace RED4ext
{
namespace scn::events { 
struct BraindanceVisibilityEvent : scn::SceneEvent
{
    static constexpr const char* NAME = "scneventsBraindanceVisibilityEvent";
    static constexpr const char* ALIAS = NAME;

    scn::PerformerId performerId; // 58
    ECustomMaterialParam customMaterialParam; // 5C
    uint32_t parameterIndex; // 60
    bool override; // 64
    uint8_t priority; // 65
    uint8_t unk66[0x68 - 0x66]; // 66
    float eventStartEndBlend; // 68
    float perspectiveBlend; // 6C
    WorldRenderAreaSettings renderSettingsFPP; // 70
    WorldRenderAreaSettings renderSettingsTPP; // 80
};
RED4EXT_ASSERT_SIZE(BraindanceVisibilityEvent, 0x90);
} // namespace scn::events
} // namespace RED4ext
