#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/gsm/SavingRequesResult.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/ISystemRequestsHandler.hpp>

namespace RED4ext
{
namespace gsm { 
struct BaseRequestsHandler : ink::ISystemRequestsHandler
{
    static constexpr const char* NAME = "gsmBaseRequestsHandler";
    static constexpr const char* ALIAS = NAME;

    gsm::SavingRequesResult SavingComplete; // 270
    uint8_t unk2A8[0x430 - 0x2A8]; // 2A8
};
RED4EXT_ASSERT_SIZE(BaseRequestsHandler, 0x430);
} // namespace gsm
} // namespace RED4ext
