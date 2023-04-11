#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/IInterruptManager_Operation.hpp>

namespace RED4ext
{
namespace scn
{
struct TalkOnReturn_Operation : scn::IInterruptManager_Operation
{
    static constexpr const char* NAME = "scnTalkOnReturn_Operation";
    static constexpr const char* ALIAS = NAME;

    bool talkOnReturn; // 30
    uint8_t unk31[0x38 - 0x31]; // 31
};
RED4EXT_ASSERT_SIZE(TalkOnReturn_Operation, 0x38);
} // namespace scn
using scnTalkOnReturn_Operation = scn::TalkOnReturn_Operation;
} // namespace RED4ext

// clang-format on
