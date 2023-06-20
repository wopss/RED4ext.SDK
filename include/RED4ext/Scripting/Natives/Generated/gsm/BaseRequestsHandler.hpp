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

    gsm::SavingRequesResult SavingComplete; // 388
    uint8_t unk3C0[0x598 - 0x3C0]; // 3C0
};
RED4EXT_ASSERT_SIZE(BaseRequestsHandler, 0x598);
} // namespace gsm
using gsmBaseRequestsHandler = gsm::BaseRequestsHandler;
} // namespace RED4ext

// clang-format on
