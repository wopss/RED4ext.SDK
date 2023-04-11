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

    gsm::SavingRequesResult SavingComplete; // 318
    uint8_t unk350[0x528 - 0x350]; // 350
};
RED4EXT_ASSERT_SIZE(BaseRequestsHandler, 0x528);
} // namespace gsm
using gsmBaseRequestsHandler = gsm::BaseRequestsHandler;
} // namespace RED4ext

// clang-format on
