#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/ISerializable.hpp>

namespace RED4ext
{
namespace math
{
struct ExprExpression : ISerializable
{
    static constexpr const char* NAME = "mathExprExpression";
    static constexpr const char* ALIAS = NAME;

    DynArray<uint32_t> tokenData; // 30
    DynArray<float> valuesData; // 40
    uint16_t returnVarType; // 50
    uint8_t unk52[0x58 - 0x52]; // 52
};
RED4EXT_ASSERT_SIZE(ExprExpression, 0x58);
} // namespace math
using mathExprExpression = math::ExprExpression;
} // namespace RED4ext

// clang-format on
