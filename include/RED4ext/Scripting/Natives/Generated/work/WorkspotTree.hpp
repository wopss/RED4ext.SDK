#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/CensorshipFlags.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/TagList.hpp>
#include <RED4ext/Scripting/Natives/Generated/work/TransitionAnim.hpp>
#include <RED4ext/Scripting/Natives/Generated/work/WorkspotAnimsetEntry.hpp>
#include <RED4ext/Scripting/Natives/Generated/work/WorkspotGlobalProp.hpp>
#include <RED4ext/Scripting/Natives/Generated/work/WorkspotItemPolicy.hpp>

namespace RED4ext
{
namespace anim { struct Rig; }
namespace work { struct IEntry; }
namespace work { struct IWorkspotItemAction; }

namespace work
{
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
    uint8_t unk70[0x90 - 0x70]; // 70
    DynArray<work::WorkspotGlobalProp> globalProps; // 90
    DynArray<Handle<work::IWorkspotItemAction>> initialActions; // A0
    bool initialCanUseExits; // B0
    bool propsPlaySyncAnim; // B1
    bool dontInjectWorkspotGraph; // B2
    bool frezeAtTheLastFrame_UseWithCaution; // B3
    float blendOutTime; // B4
    CName animGraphSlotName; // B8
    float inertializationDurationEnter; // C0
    float inertializationDurationExitNatural; // C4
    float inertializationDurationExitForced; // C8
    uint8_t unkCC[0xD0 - 0xCC]; // CC
    DynArray<work::WorkspotAnimsetEntry> finalAnimsets; // D0
    float autoTransitionBlendTime; // E0
    uint8_t unkE4[0xE8 - 0xE4]; // E4
    red::TagList whitelistVisualTags; // E8
    red::TagList blacklistVisualTags; // F8
    uint8_t unk108[0x118 - 0x108]; // 108
    TweakDBID statusEffectID; // 118
    bool useTimeLimitForSequences; // 120
    uint8_t unk121[0x124 - 0x121]; // 121
    float sequencesTimeLimit; // 124
    bool snapToTerrain; // 128
    bool unmountBodyCarry; // 129
    uint8_t unk12A[0x12C - 0x12A]; // 12A
    CensorshipFlags censorshipFlags; // 12C
    work::WorkspotItemPolicy itemsPolicy; // 130
    uint8_t unk134[0x138 - 0x134]; // 134
};
RED4EXT_ASSERT_SIZE(WorkspotTree, 0x138);
} // namespace work
using workWorkspotTree = work::WorkspotTree;
} // namespace RED4ext

// clang-format on
