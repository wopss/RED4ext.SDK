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
struct TalkInteractionListener : ISerializable
{
    static constexpr const char* NAME = "scnTalkInteractionListener";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk30[0x38 - 0x30]; // 30
};
RED4EXT_ASSERT_SIZE(TalkInteractionListener, 0x38);
} // namespace scn
using scnTalkInteractionListener = scn::TalkInteractionListener;
} // namespace RED4ext

// clang-format on
