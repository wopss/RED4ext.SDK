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

    uint8_t unk548[0x550 - 0x548]; // 548
    gsm::SavingRequesResult SavingComplete; // 550
    uint8_t unk588[0x758 - 0x588]; // 588
};
RED4EXT_ASSERT_SIZE(BaseRequestsHandler, 0x758);
} // namespace gsm
using gsmBaseRequestsHandler = gsm::BaseRequestsHandler;
} // namespace RED4ext

// clang-format on
