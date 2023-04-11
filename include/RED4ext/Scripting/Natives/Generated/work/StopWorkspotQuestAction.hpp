#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/work/IWorkspotQuestAction.hpp>

namespace RED4ext
{
namespace work
{
struct StopWorkspotQuestAction : work::IWorkspotQuestAction
{
    static constexpr const char* NAME = "workStopWorkspotQuestAction";
    static constexpr const char* ALIAS = NAME;

    CName exitAnim; // 30
    bool allowCurrAnimToFinish; // 38
    uint8_t unk39[0x40 - 0x39]; // 39
};
RED4EXT_ASSERT_SIZE(StopWorkspotQuestAction, 0x40);
} // namespace work
using workStopWorkspotQuestAction = work::StopWorkspotQuestAction;
} // namespace RED4ext

// clang-format on
