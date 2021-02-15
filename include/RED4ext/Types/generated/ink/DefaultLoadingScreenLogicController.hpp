#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Types/generated/ink/ILoadingLogicController.hpp>

namespace RED4ext
{
namespace ink { 
struct DefaultLoadingScreenLogicController : ink::ILoadingLogicController
{
    static constexpr const char* NAME = "inkDefaultLoadingScreenLogicController";
    static constexpr const char* ALIAS = "DefaultLoadingScreenLogicController";

    uint8_t unk180[0x190 - 0x180]; // 180
};
RED4EXT_ASSERT_SIZE(DefaultLoadingScreenLogicController, 0x190);
} // namespace ink
using DefaultLoadingScreenLogicController = ink::DefaultLoadingScreenLogicController;
} // namespace RED4ext
