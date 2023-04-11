#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/ISerializable.hpp>

namespace RED4ext
{
namespace scn
{
struct IInterruptManager_Operation : ISerializable
{
    static constexpr const char* NAME = "scnIInterruptManager_Operation";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(IInterruptManager_Operation, 0x30);
} // namespace scn
using scnIInterruptManager_Operation = scn::IInterruptManager_Operation;
} // namespace RED4ext

// clang-format on
