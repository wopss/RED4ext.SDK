#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>

namespace RED4ext
{
namespace scn
{
struct AICommandFactory : IScriptable
{
    static constexpr const char* NAME = "scnAICommandFactory";
    static constexpr const char* ALIAS = "AICommandFactory";

};
RED4EXT_ASSERT_SIZE(AICommandFactory, 0x40);
} // namespace scn
using scnAICommandFactory = scn::AICommandFactory;
using AICommandFactory = scn::AICommandFactory;
} // namespace RED4ext

// clang-format on
