#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/Event.hpp>
#include <RED4ext/Scripting/Natives/Generated/rend/PostFx_ScanningState.hpp>

namespace RED4ext
{
namespace ent
{
struct RenderScanEvent : red::Event
{
    static constexpr const char* NAME = "entRenderScanEvent";
    static constexpr const char* ALIAS = NAME;

    rend::PostFx_ScanningState scanState; // 40
    uint8_t unk41[0x48 - 0x41]; // 41
};
RED4EXT_ASSERT_SIZE(RenderScanEvent, 0x48);
} // namespace ent
using entRenderScanEvent = ent::RenderScanEvent;
} // namespace RED4ext

// clang-format on
