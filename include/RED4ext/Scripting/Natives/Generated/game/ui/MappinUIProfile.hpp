#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/ResourceReferenceScriptToken.hpp>

namespace RED4ext
{
namespace game::data { struct MappinUIRuntimeProfile_Record; }
namespace game::data { struct MappinUISpawnProfile_Record; }

namespace game::ui
{
struct MappinUIProfile
{
    static constexpr const char* NAME = "gameuiMappinUIProfile";
    static constexpr const char* ALIAS = "MappinUIProfile";

    red::ResourceReferenceScriptToken widgetResource; // 00
    CName widgetLibraryID; // 08
    Handle<game::data::MappinUISpawnProfile_Record> spawn; // 10
    Handle<game::data::MappinUIRuntimeProfile_Record> runtime; // 20
};
RED4EXT_ASSERT_SIZE(MappinUIProfile, 0x30);
} // namespace game::ui
using gameuiMappinUIProfile = game::ui::MappinUIProfile;
using MappinUIProfile = game::ui::MappinUIProfile;
} // namespace RED4ext

// clang-format on
