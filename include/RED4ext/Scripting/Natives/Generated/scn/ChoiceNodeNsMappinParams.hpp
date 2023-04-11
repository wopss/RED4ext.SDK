#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/ChoiceNodeNsMappinLocation.hpp>

namespace RED4ext
{
namespace scn
{
struct ChoiceNodeNsMappinParams : ISerializable
{
    static constexpr const char* NAME = "scnChoiceNodeNsMappinParams";
    static constexpr const char* ALIAS = NAME;

    scn::ChoiceNodeNsMappinLocation locationType; // 30
    uint8_t unk31[0x34 - 0x31]; // 31
    TweakDBID mappinSettings; // 34
    uint8_t unk3C[0x40 - 0x3C]; // 3C
};
RED4EXT_ASSERT_SIZE(ChoiceNodeNsMappinParams, 0x40);
} // namespace scn
using scnChoiceNodeNsMappinParams = scn::ChoiceNodeNsMappinParams;
} // namespace RED4ext

// clang-format on
