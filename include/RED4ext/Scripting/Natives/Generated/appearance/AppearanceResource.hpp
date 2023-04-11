#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/appearance/AlternateAppearanceEntry.hpp>
#include <RED4ext/Scripting/Natives/Generated/appearance/CensorshipEntry.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/dismemberment/WoundsConfigSet.hpp>
#include <RED4ext/Scripting/Natives/Generated/res/StreamedResource.hpp>

namespace RED4ext
{
namespace appearance { struct AppearanceDefinition; }
namespace appearance { struct CookedAppearanceData; }
namespace ent { struct EntityTemplate; }
namespace ent::dismemberment { struct EffectResource; }
namespace ent::dismemberment { struct WoundResource; }

namespace appearance
{
struct AppearanceResource : res::StreamedResource
{
    static constexpr const char* NAME = "appearanceAppearanceResource";
    static constexpr const char* ALIAS = NAME;

    CName baseType; // 40
    CName baseEntityType; // 48
    CName partType; // 50
    CName preset; // 58
    CName alternateAppearanceSettingName; // 60
    DynArray<CName> alternateAppearanceSuffixes; // 68
    DynArray<appearance::AlternateAppearanceEntry> alternateAppearanceMapping; // 78
    int32_t proxyPolyCount; // 88
    bool forceCompileProxy; // 8C
    bool generatePlayerBlockingCollisionForProxy; // 8D
    uint8_t unk8E[0x90 - 0x8E]; // 8E
    RaRef<ent::EntityTemplate> baseEntity; // 90
    DynArray<Handle<appearance::AppearanceDefinition>> appearances; // 98
    DynArray<appearance::CensorshipEntry> censorshipMapping; // A8
    RaRef<appearance::CookedAppearanceData> commonCookData; // B8
    DynArray<Handle<ent::dismemberment::WoundResource>> Wounds; // C0
    DynArray<Handle<ent::dismemberment::EffectResource>> DismEffects; // D0
    ent::dismemberment::WoundsConfigSet DismWoundConfig; // E0
    uint8_t unkF0[0xF8 - 0xF0]; // F0
};
RED4EXT_ASSERT_SIZE(AppearanceResource, 0xF8);
} // namespace appearance
using appearanceAppearanceResource = appearance::AppearanceResource;
} // namespace RED4ext

// clang-format on
