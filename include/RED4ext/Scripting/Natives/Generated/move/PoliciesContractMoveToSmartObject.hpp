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
struct __declspec(align(0x10)) PoliciesContractMoveToSmartObject : move::PoliciesContract
{
    static constexpr const char* NAME = "movePoliciesContractMoveToSmartObject";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk58[0x110 - 0x58]; // 58
};
RED4EXT_ASSERT_SIZE(PoliciesContractMoveToSmartObject, 0x110);
} // namespace move
using movePoliciesContractMoveToSmartObject = move::PoliciesContractMoveToSmartObject;
} // namespace RED4ext

// clang-format on
