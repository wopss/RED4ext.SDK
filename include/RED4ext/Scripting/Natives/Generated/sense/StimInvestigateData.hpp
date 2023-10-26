#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector4.hpp>

namespace RED4ext
{
namespace ent { struct Entity; }

namespace sense
{
struct __declspec(align(0x10)) StimInvestigateData
{
    static constexpr const char* NAME = "senseStimInvestigateData";
    static constexpr const char* ALIAS = "stimInvestigateData";

    Vector4 distrationPoint; // 00
    Vector4 attackInstigatorPosition; // 10
    DynArray<Vector4> investigationSpots; // 20
    WeakHandle<ent::Entity> controllerEntity; // 30
    WeakHandle<ent::Entity> mainDeviceEntity; // 40
    WeakHandle<ent::Entity> attackInstigator; // 50
    WeakHandle<ent::Entity> victimEntity; // 60
    int32_t fearPhase; // 70
    bool revealsInstigatorPosition; // 74
    bool illegalAction; // 75
    bool skipReactionDelay; // 76
    bool skipInitialAnimation; // 77
    bool investigateController; // 78
    uint8_t unk79[0x80 - 0x79]; // 79
};
RED4EXT_ASSERT_SIZE(StimInvestigateData, 0x80);
} // namespace sense
using senseStimInvestigateData = sense::StimInvestigateData;
using stimInvestigateData = sense::StimInvestigateData;
} // namespace RED4ext

// clang-format on
