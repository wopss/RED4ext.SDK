#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/AI/CTreeNodeDecoratorDefinition.hpp>

namespace RED4ext
{
namespace AI
{
struct CTreeNodeReadWorkspotParamsDefinition : AI::CTreeNodeDecoratorDefinition
{
    static constexpr const char* NAME = "AICTreeNodeReadWorkspotParamsDefinition";
    static constexpr const char* ALIAS = NAME;

    CName workspotNodeVarName; // 48
    CName prevWorkspotNodeVarName; // 50
    CName moveTargetVarName; // 58
    CName workspotEntryAnimVar; // 60
    CName splineNodeVarName; // 68
    CName animControllerVarName; // 70
    CName splineStartAnimVarName; // 78
    CName splineStopAnimVarName; // 80
};
RED4EXT_ASSERT_SIZE(CTreeNodeReadWorkspotParamsDefinition, 0x88);
} // namespace AI
using AICTreeNodeReadWorkspotParamsDefinition = AI::CTreeNodeReadWorkspotParamsDefinition;
} // namespace RED4ext

// clang-format on
