#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/scn/screenplay/ItemId.hpp>

namespace RED4ext
{
namespace scn::screenplay
{
struct StandaloneComment
{
    static constexpr const char* NAME = "scnscreenplayStandaloneComment";
    static constexpr const char* ALIAS = NAME;

    scn::screenplay::ItemId itemId; // 00
    uint8_t unk04[0x8 - 0x4]; // 4
    CString comment; // 08
};
RED4EXT_ASSERT_SIZE(StandaloneComment, 0x28);
} // namespace scn::screenplay
using scnscreenplayStandaloneComment = scn::screenplay::StandaloneComment;
} // namespace RED4ext

// clang-format on
