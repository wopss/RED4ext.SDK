#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
namespace quest { struct QuestResource; }

namespace gsm
{
struct MainQuest : ISerializable
{
    static constexpr const char* NAME = "gsmMainQuest";
    static constexpr const char* ALIAS = NAME;

    RaRef<quest::QuestResource> questFile; // 30
    bool additionalContent; // 38
    uint8_t unk39[0x40 - 0x39]; // 39
    CName additionalContentName; // 40
};
RED4EXT_ASSERT_SIZE(MainQuest, 0x48);
} // namespace gsm
using gsmMainQuest = gsm::MainQuest;
} // namespace RED4ext

// clang-format on
