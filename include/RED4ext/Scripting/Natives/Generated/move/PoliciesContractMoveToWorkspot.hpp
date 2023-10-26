#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/move/PoliciesContract.hpp>

namespace RED4ext
{
namespace move
{
struct __declspec(align(0x10)) PoliciesContractMoveToWorkspot : move::PoliciesContract
{
    static constexpr const char* NAME = "movePoliciesContractMoveToWorkspot";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk58[0xD0 - 0x58]; // 58
};
RED4EXT_ASSERT_SIZE(PoliciesContractMoveToWorkspot, 0xD0);
} // namespace move
using movePoliciesContractMoveToWorkspot = move::PoliciesContractMoveToWorkspot;
} // namespace RED4ext

// clang-format on
