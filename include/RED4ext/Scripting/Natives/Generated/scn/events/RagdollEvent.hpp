#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/PerformerId.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/SceneEvent.hpp>

namespace RED4ext
{
namespace scn::events
{
struct RagdollEvent : scn::SceneEvent
{
    static constexpr const char* NAME = "scneventsRagdollEvent";
    static constexpr const char* ALIAS = NAME;

    scn::PerformerId performer; // 58
    bool enableRagdoll; // 5C
    uint8_t unk5D[0x60 - 0x5D]; // 5D
};
RED4EXT_ASSERT_SIZE(RagdollEvent, 0x60);
} // namespace scn::events
using scneventsRagdollEvent = scn::events::RagdollEvent;
} // namespace RED4ext

// clang-format on
