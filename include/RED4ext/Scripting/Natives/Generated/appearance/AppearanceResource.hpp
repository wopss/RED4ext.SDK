#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/NativeTypes.hpp>
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

namespace appearance { 
struct AppearanceResource : res::StreamedResource
{
    static constexpr const char* NAME = "appearanceAppearanceResource";
    static constexpr const char* ALIAS = NAME;

    CName baseType; // 40
    CName baseEntityType; // 48
    CName partType; // 50
    CName preset; // 58
    int32_t proxyPolyCount; // 60
    bool forceCompileProxy; // 64
    uint8_t unk65[0x68 - 0x65]; // 65
    RaRef<ent::EntityTemplate> baseEntity; // 68
    DynArray<Handle<appearance::AppearanceDefinition>> appearances; // 70
    DynArray<appearance::CensorshipEntry> censorshipMapping; // 80
    RaRef<appearance::CookedAppearanceData> commonCookData; // 90
    DynArray<Handle<ent::dismemberment::WoundResource>> Wounds; // 98
    DynArray<Handle<ent::dismemberment::EffectResource>> DismEffects; // A8
    ent::dismemberment::WoundsConfigSet DismWoundConfig; // B8
    uint8_t unkC8[0xD0 - 0xC8]; // C8
};
RED4EXT_ASSERT_SIZE(AppearanceResource, 0xD0);
} // namespace appearance
} // namespace RED4ext
