#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/gsm/SavingRequesResult.hpp>
#include <RED4ext/Types/generated/ink/ISystemRequestsHandler.hpp>

namespace RED4ext
{
namespace gsm { 
struct BaseRequestsHandler : ink::ISystemRequestsHandler
{
    static constexpr const char* NAME = "gsmBaseRequestsHandler";
    static constexpr const char* ALIAS = NAME;

    gsm::SavingRequesResult SavingComplete; // 190
    uint8_t unk1C8[0x330 - 0x1C8]; // 1C8
};
RED4EXT_ASSERT_SIZE(BaseRequestsHandler, 0x330);
} // namespace gsm
} // namespace RED4ext
