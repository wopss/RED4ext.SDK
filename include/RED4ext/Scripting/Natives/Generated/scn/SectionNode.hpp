#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/SceneGraphNode.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/SceneTime.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/SectionInternalsActorBehavior.hpp>

namespace RED4ext
{
namespace scn { struct SceneEvent; }

namespace scn
{
struct SectionNode : scn::SceneGraphNode
{
    static constexpr const char* NAME = "scnSectionNode";
    static constexpr const char* ALIAS = NAME;

    DynArray<Handle<scn::SceneEvent>> events; // 48
    scn::SceneTime sectionDuration; // 58
    uint8_t unk5C[0x60 - 0x5C]; // 5C
    DynArray<scn::SectionInternalsActorBehavior> actorBehaviors; // 60
    bool isFocusClue; // 70
    uint8_t unk71[0x78 - 0x71]; // 71
};
RED4EXT_ASSERT_SIZE(SectionNode, 0x78);
} // namespace scn
using scnSectionNode = scn::SectionNode;
} // namespace RED4ext

// clang-format on
