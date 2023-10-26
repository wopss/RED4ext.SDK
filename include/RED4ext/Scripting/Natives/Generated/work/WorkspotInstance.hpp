#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/ISerializable.hpp>

namespace RED4ext
{
namespace work
{
struct __declspec(align(0x10)) WorkspotInstance : ISerializable
{
    static constexpr const char* NAME = "workWorkspotInstance";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk30[0x2E0 - 0x30]; // 30
};
RED4EXT_ASSERT_SIZE(WorkspotInstance, 0x2E0);
} // namespace work
using workWorkspotInstance = work::WorkspotInstance;
} // namespace RED4ext

// clang-format on
