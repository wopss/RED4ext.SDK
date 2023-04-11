#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/behavior/TypeRef.hpp>

namespace RED4ext
{
namespace AI::behavior { struct PassiveExpressionDefinition; }

namespace AI::behavior
{
struct ExpressionSocket : ISerializable
{
    static constexpr const char* NAME = "AIbehaviorExpressionSocket";
    static constexpr const char* ALIAS = NAME;

    AI::behavior::TypeRef typeHint; // 30
    Handle<AI::behavior::PassiveExpressionDefinition> expression; // 48
};
RED4EXT_ASSERT_SIZE(ExpressionSocket, 0x58);
} // namespace AI::behavior
using AIbehaviorExpressionSocket = AI::behavior::ExpressionSocket;
} // namespace RED4ext

// clang-format on
