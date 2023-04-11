#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/RewindableSectionPlaySpeedModifiers.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/SceneGraphNode.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/SceneTime.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/SectionInternalsActorBehavior.hpp>

namespace RED4ext
{
namespace scn { struct SceneEvent; }

namespace scn
{
struct RewindableSectionNode : scn::SceneGraphNode
{
    static constexpr const char* NAME = "scnRewindableSectionNode";
    static constexpr const char* ALIAS = NAME;

    DynArray<Handle<scn::SceneEvent>> events; // 48
    scn::SceneTime sectionDuration; // 58
    uint8_t unk5C[0x60 - 0x5C]; // 5C
    DynArray<scn::SectionInternalsActorBehavior> actorBehaviors; // 60
    uint8_t unk70[0x74 - 0x70]; // 70
    scn::RewindableSectionPlaySpeedModifiers playSpeedModifiers; // 74
    uint8_t unk8C[0x90 - 0x8C]; // 8C
};
RED4EXT_ASSERT_SIZE(RewindableSectionNode, 0x90);
} // namespace scn
using scnRewindableSectionNode = scn::RewindableSectionNode;
} // namespace RED4ext

// clang-format on
