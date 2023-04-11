#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/InterruptReturnLinesBehavior.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/InterruptionScenarioId.hpp>

namespace RED4ext
{
namespace scn { struct IInterruptCondition; }
namespace scn { struct IReturnCondition; }
namespace scn { struct InterruptFactConditionType; }

namespace scn
{
struct InterruptionScenario
{
    static constexpr const char* NAME = "scnInterruptionScenario";
    static constexpr const char* ALIAS = NAME;

    DynArray<Handle<scn::IInterruptCondition>> interruptConditions; // 00
    DynArray<Handle<scn::IReturnCondition>> returnConditions; // 10
    Handle<scn::InterruptFactConditionType> postInterruptSignalFactCondition; // 20
    Handle<scn::InterruptFactConditionType> postReturnSignalFactCondition; // 30
    float postInterruptSignalTimeDelay; // 40
    float postReturnSignalTimeDelay; // 44
    scn::InterruptReturnLinesBehavior playingLinesBehavior; // 48
    bool enabled; // 49
    bool talkOnReturn; // 4A
    bool playInterruptLine; // 4B
    bool forcePlayReturnLine; // 4C
    bool interruptionSpammingSafeguard; // 4D
    uint8_t unk4E[0x50 - 0x4E]; // 4E
    scn::InterruptionScenarioId id; // 50
    uint8_t unk54[0x58 - 0x54]; // 54
    CName name; // 58
    CName queueName; // 60
};
RED4EXT_ASSERT_SIZE(InterruptionScenario, 0x68);
} // namespace scn
using scnInterruptionScenario = scn::InterruptionScenario;
} // namespace RED4ext

// clang-format on
