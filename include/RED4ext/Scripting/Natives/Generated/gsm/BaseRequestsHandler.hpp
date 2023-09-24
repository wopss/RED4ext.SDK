#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/gsm/SavingRequesResult.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/ISystemRequestsHandler.hpp>

namespace RED4ext
{
namespace gsm
{
struct BaseRequestsHandler : ink::ISystemRequestsHandler
{
    static constexpr const char* NAME = "gsmBaseRequestsHandler";
    static constexpr const char* ALIAS = NAME;

    gsm::SavingRequesResult SavingComplete; // 468
    uint8_t unk4A0[0x678 - 0x4A0]; // 4A0
};
RED4EXT_ASSERT_SIZE(BaseRequestsHandler, 0x678);
} // namespace gsm
using gsmBaseRequestsHandler = gsm::BaseRequestsHandler;
} // namespace RED4ext

// clang-format on
