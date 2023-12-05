#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/ActorId.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/ChoiceNodeNsAttachToActorParams.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/ChoiceNodeNsAttachToGameObjectParams.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/ChoiceNodeNsAttachToPropParams.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/ChoiceNodeNsAttachToScreenParams.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/ChoiceNodeNsAttachToWorldParams.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/ChoiceNodeNsChoiceNodeBitFlags.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/ChoiceNodeNsOperationMode.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/ChoiceNodeOption.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/InterruptCapability.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/SceneEventId.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/SceneGraphNode.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/screenplay/ItemId.hpp>

namespace RED4ext
{
namespace quest { struct IBaseCondition; }
namespace scn { struct ChoiceNodeNsActorReminderParams; }
namespace scn { struct ChoiceNodeNsLookAtParams; }
namespace scn { struct ChoiceNodeNsMappinParams; }
namespace scn { struct ChoiceNodeNsTimedParams; }
namespace scn { struct InteractionShapeParams; }
namespace scn { struct ReminderCondition; }
namespace scn { struct TimedCondition; }

namespace scn
{
struct __declspec(align(0x10)) ChoiceNode : scn::SceneGraphNode
{
    static constexpr const char* NAME = "scnChoiceNode";
    static constexpr const char* ALIAS = NAME;

    CString displayNameOverride; // 48
    LocalizationString localizedDisplayNameOverride; // 68
    DynArray<scn::ChoiceNodeOption> options; // 90
    scn::ChoiceNodeNsOperationMode mode; // A0
    uint8_t unkA1[0xA8 - 0xA1]; // A1
    DynArray<scn::SceneEventId> persistentLineEvents; // A8
    scn::screenplay::ItemId customPersistentLine; // B8
    uint8_t unkBC[0xC0 - 0xBC]; // BC
    Handle<scn::ChoiceNodeNsTimedParams> timedParams; // C0
    Handle<scn::ChoiceNodeNsActorReminderParams> reminderParams; // D0
    Handle<scn::InteractionShapeParams> shapeParams; // E0
    Handle<scn::ChoiceNodeNsLookAtParams> lookAtParams; // F0
    Handle<quest::IBaseCondition> forceAttachToScreenCondition; // 100
    CName choiceGroup; // 110
    uint8_t choicePriority; // 118
    uint8_t hubPriority; // 119
    uint8_t unk11A[0x120 - 0x11A]; // 11A
    Handle<scn::ChoiceNodeNsMappinParams> mappinParams; // 120
    scn::InterruptCapability interruptCapability; // 130
    scn::ActorId interruptionSpeakerOverride; // 134
    scn::ChoiceNodeNsChoiceNodeBitFlags choiceFlags; // 138
    bool alwaysUseBrainGender; // 13A
    bool cpoHoldInputActionSection; // 13B
    bool doNotTurnOffPreventionSystem; // 13C
    uint8_t unk13D[0x140 - 0x13D]; // 13D
    scn::ChoiceNodeNsAttachToActorParams ataParams; // 140
    scn::ChoiceNodeNsAttachToPropParams atpParams; // 148
    scn::ChoiceNodeNsAttachToGameObjectParams atgoParams; // 150
    scn::ChoiceNodeNsAttachToScreenParams atsParams; // 160
    uint8_t unk161[0x170 - 0x161]; // 161
    scn::ChoiceNodeNsAttachToWorldParams atwParams; // 170
    Handle<scn::TimedCondition> timedSectionCondition; // 1A0
    Handle<scn::ReminderCondition> reminderCondition; // 1B0
};
RED4EXT_ASSERT_SIZE(ChoiceNode, 0x1C0);
} // namespace scn
using scnChoiceNode = scn::ChoiceNode;
} // namespace RED4ext

// clang-format on
