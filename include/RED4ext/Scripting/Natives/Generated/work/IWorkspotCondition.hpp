#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/Scripting/Natives/Generated/work/WorkspotLogic.hpp>

namespace RED4ext
{
namespace work
{
struct IWorkspotCondition : ISerializable
{
    static constexpr const char* NAME = "workIWorkspotCondition";
    static constexpr const char* ALIAS = NAME;

    work::WorkspotLogic expectedResult; // 30
    bool equals; // 34
    uint8_t unk35[0x38 - 0x35]; // 35
};
RED4EXT_ASSERT_SIZE(IWorkspotCondition, 0x38);
} // namespace work
using workIWorkspotCondition = work::IWorkspotCondition;
} // namespace RED4ext

// clang-format on
