#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>

namespace RED4ext
{
namespace text { struct TextParameterSet; }

namespace game
{
struct UILocalizationDataPackage : IScriptable
{
    static constexpr const char* NAME = "gameUILocalizationDataPackage";
    static constexpr const char* ALIAS = "UILocalizationDataPackage";

    DynArray<float> floatValues; // 40
    DynArray<int32_t> intValues; // 50
    DynArray<CName> nameValues; // 60
    DynArray<float> statValues; // 70
    DynArray<CName> statNames; // 80
    int32_t paramsCount; // 90
    uint8_t unk94[0x98 - 0x94]; // 94
    Handle<text::TextParameterSet> textParams; // 98
};
RED4EXT_ASSERT_SIZE(UILocalizationDataPackage, 0xA8);
} // namespace game
using gameUILocalizationDataPackage = game::UILocalizationDataPackage;
using UILocalizationDataPackage = game::UILocalizationDataPackage;
} // namespace RED4ext

// clang-format on
