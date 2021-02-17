#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/Types/generated/AbsolutePathSerializable.hpp>
#include <RED4ext/Types/generated/EEnvManagerModifier.hpp>
#include <RED4ext/Types/generated/ESaveFormat.hpp>
#include <RED4ext/Types/generated/rend/ResolutionMultiplier.hpp>
#include <RED4ext/Types/generated/rend/ScreenshotMode.hpp>
#include <RED4ext/Types/generated/rend/dim/EPreset.hpp>

namespace RED4ext
{
namespace rend { 
struct SingleScreenShotData : ISerializable
{
    static constexpr const char* NAME = "rendSingleScreenShotData";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk30[0x34 - 0x30]; // 30
    rend::ScreenshotMode mode; // 34
    AbsolutePathSerializable outputPath; // 38
    uint8_t unk58[0x80 - 0x58]; // 58
    rend::dim::EPreset resolution; // 80
    rend::ResolutionMultiplier resolutionMultiplier; // 84
    bool forceLOD0; // 88
    uint8_t unk89[0x8C - 0x89]; // 89
    ESaveFormat saveFormat; // 8C
    DynArray<EEnvManagerModifier> emmModes; // 90
    uint8_t unkA0[0xF8 - 0xA0]; // A0
};
RED4EXT_ASSERT_SIZE(SingleScreenShotData, 0xF8);
} // namespace rend
} // namespace RED4ext
