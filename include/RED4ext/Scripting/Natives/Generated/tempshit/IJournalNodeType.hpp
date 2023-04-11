#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/ISerializable.hpp>

namespace RED4ext
{
namespace tempshit
{
struct IJournalNodeType : ISerializable
{
    static constexpr const char* NAME = "tempshitIJournalNodeType";
    static constexpr const char* ALIAS = NAME;

};
RED4EXT_ASSERT_SIZE(IJournalNodeType, 0x30);
} // namespace tempshit
using tempshitIJournalNodeType = tempshit::IJournalNodeType;
} // namespace RED4ext

// clang-format on
