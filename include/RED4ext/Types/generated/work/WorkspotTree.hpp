#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/Types/SimpleTypes.hpp>
#include <RED4ext/Types/generated/CensorshipFlags.hpp>
#include <RED4ext/Types/generated/red/TagList.hpp>
#include <RED4ext/Types/generated/work/TransitionAnim.hpp>
#include <RED4ext/Types/generated/work/WorkspotAnimsetEntry.hpp>
#include <RED4ext/Types/generated/work/WorkspotGlobalProp.hpp>
#include <RED4ext/Types/generated/work/WorkspotItemPolicy.hpp>

namespace RED4ext
{
namespace anim { struct Rig; }
namespace work { struct IEntry; }
namespace work { struct IWorkspotItemAction; }

namespace work { 
struct WorkspotTree : ISerializable
{
    static constexpr const char* NAME = "workWorkspotTree";
    static constexpr const char* ALIAS = NAME;

    Handle<work::IEntry> rootEntry; // 30
    uint32_t idCounter; // 40
    uint8_t unk44[0x48 - 0x44]; // 44
    red::TagList tags; // 48
    DynArray<work::TransitionAnim> customTransitionAnims; // 58
    RaRef<anim::Rig> workspotRig; // 68
    DynArray<CName> availableRigSlots; // 70
    DynArray<CName> availablePropIds; // 80
    DynArray<work::WorkspotGlobalProp> globalProps; // 90
    DynArray<Handle<work::IWorkspotItemAction>> initialActions; // A0
    bool dontInjectWorkspotGraph; // B0
    bool frezeAtTheLastFrame_UseWithCaution; // B1
    uint8_t unkB2[0xB4 - 0xB2]; // B2
    float blendOutTime; // B4
    CName animGraphSlotName; // B8
    float inertializationDurationEnter; // C0
    float inertializationDurationExitNatural; // C4
    float inertializationDurationExitForced; // C8
    uint8_t unkCC[0xD0 - 0xCC]; // CC
    DynArray<work::WorkspotAnimsetEntry> finalAnimsets; // D0
    uint8_t unkE0[0xE4 - 0xE0]; // E0
    float autoTransitionBlendTime; // E4
    red::TagList whitelistVisualTags; // E8
    red::TagList blacklistVisualTags; // F8
    uint8_t unk108[0x118 - 0x108]; // 108
    TweakDBID statusEffectID; // 118
    DynArray<work::WorkspotAnimsetEntry> animsets; // 120
    bool hasEntityPathsGenerated; // 130
    uint8_t unk131[0x138 - 0x131]; // 131
    DynArray<CName> entitiesPaths; // 138
    uint8_t unk148[0x149 - 0x148]; // 148
    bool disableAutoAnimsetGeneraion; // 149
    bool useTimeLimitForSequences; // 14A
    uint8_t unk14B[0x14C - 0x14B]; // 14B
    float sequencesTimeLimit; // 14C
    uint8_t unk150[0x151 - 0x150]; // 150
    bool snapToTerrain; // 151
    bool unmountBodyCarry; // 152
    uint8_t unk153[0x154 - 0x153]; // 153
    CensorshipFlags censorshipFlags; // 154
    work::WorkspotItemPolicy itemsPolicy; // 158
    uint8_t unk15C[0x160 - 0x15C]; // 15C
};
RED4EXT_ASSERT_SIZE(WorkspotTree, 0x160);
} // namespace work
} // namespace RED4ext
