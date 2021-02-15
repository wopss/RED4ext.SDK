#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Types/generated/ink/CompoundWidgetReference.hpp>
#include <RED4ext/Types/generated/ink/ILoadingLogicController.hpp>
#include <RED4ext/Types/generated/ink/WidgetReference.hpp>

namespace RED4ext
{
namespace ink { 
struct InitialLoadingScreenLogicController : ink::ILoadingLogicController
{
    static constexpr const char* NAME = "inkInitialLoadingScreenLogicController";
    static constexpr const char* ALIAS = "InitialLoadingScreenLogicController";

    CName afterSkipAnimation; // 180
    CName loadingFinishedAudioStopEvent; // 188
    uint8_t unk190[0x1B0 - 0x190]; // 190
    ink::WidgetReference skipButtonPanel; // 1B0
    ink::CompoundWidgetReference loadingPartsContainer; // 1C8
    uint8_t unk1E0[0x280 - 0x1E0]; // 1E0
};
RED4EXT_ASSERT_SIZE(InitialLoadingScreenLogicController, 0x280);
} // namespace ink
using InitialLoadingScreenLogicController = ink::InitialLoadingScreenLogicController;
} // namespace RED4ext
