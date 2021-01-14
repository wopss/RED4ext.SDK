#pragma once

#include <cstdint>

#include <RED4ext/CName.hpp>
#include <RED4ext/CString.hpp>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/HashMap.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>
#include <RED4ext/Handle.hpp>

namespace RED4ext
{
struct CWorldRuntimeSystemEntityAppearanceChanger;
struct CGameuiCharacterCustomizationState;
struct CGameuiCharacterCustomizationInfoResource;
struct CScnSceneSystem;
struct CScriptedPuppet;
struct CEntMorphTargetManagerComponent;
struct CGameuiCharacterCreationPuppetPreviewGameController;
struct CGameuiCharacterCustomizationOptionImpl;
struct CGameuiCharacterCustomizationAction;
struct CGameuiIndexedAppearanceDefinition;

struct CGameuiCharacterCustomizationSystem : IScriptable
{
    virtual void sub_118() = 0;
    virtual void sub_120() = 0;
    virtual void sub_128() = 0;
    virtual void sub_130() = 0;
    virtual void sub_138() = 0;
    virtual void sub_140() = 0;
    virtual void sub_148() = 0;
    virtual void sub_150() = 0;
    virtual void sub_158() = 0;
    virtual void sub_160() = 0;
    virtual void sub_168() = 0;
    virtual void sub_170() = 0;
    virtual void sub_178() = 0;
    virtual void sub_180() = 0;
    virtual void sub_188() = 0;
    virtual void sub_190() = 0;
    virtual void sub_198() = 0;
    virtual void sub_1A0() = 0;
    virtual void sub_1A8() = 0;
    virtual void sub_1B0() = 0;
    virtual void sub_1B8() = 0;
    virtual void sub_1C0() = 0;
    virtual void sub_1C8() = 0;
    virtual void sub_1D0() = 0;
    virtual void sub_1D8() = 0;
    virtual void LoadGenderCustomizationData(void* unk1, bool isMale, void* unk3) = 0; // Load Gender Customization data
    virtual void sub_1E8() = 0;
    virtual void sub_1F0() = 0;
    virtual void sub_1F8() = 0;
    virtual void sub_200() = 0;
    virtual void sub_208() = 0;
    virtual void sub_210() = 0;
    virtual void ApplyChangeToOption(const Handle<CGameuiCharacterCustomizationOptionImpl>& option,
                                     uint32_t newIndex) = 0;
    virtual void sub_220() = 0;
    virtual void sub_228() = 0;
    virtual void sub_230() = 0;
    virtual void sub_238() = 0;
    virtual void sub_240() = 0;
    virtual void sub_248() = 0;
    virtual void sub_250() = 0;
    virtual void sub_258() = 0;

    uintptr_t unk40;                                               // 40
    CWorldRuntimeSystemEntityAppearanceChanger* appearanceChanger; // 48
    uintptr_t unk50;                                               // 50
    CGameuiCharacterCustomizationState* customizationState;        // 58
    uintptr_t unk60;                                               // 60
    uintptr_t unk68;                                               // 68
    CGameuiCharacterCustomizationInfoResource* unk70;              // 70
    uintptr_t unk78;                                               // 78
    uintptr_t unk80;                                               // 80
    uintptr_t unk88;                                               // 88
    DynArray<void*> unk90;                                         // 90
    uintptr_t unkA0;                                               // A0
    DynArray<void*> unkA8;                                         // A8
    DynArray<void*> unkB8;                                         // B8
    uintptr_t unkC8;                                               // C8
    DynArray<void*> unkD0;                                         // D0
    CScriptedPuppet* unkE0;                                        // E0
    uintptr_t unkE8;                                               // E8
    CEntMorphTargetManagerComponent* unkF0;                        // F0
    uintptr_t unkF8;                                               // F8
    DynArray<void*> unk100;                                        // 100
    uintptr_t unk110;                                              // 110
    DynArray<uint64_t> unk118;                                     // 118 - Array of hashes?
    DynArray<void*> unk128;                                        // 128
    DynArray<void*> unk138;                                        // 138
    DynArray<void*> unk148;                                        // 148
    HashMapBase<uint64_t, uint64_t> unk158;                        // 158
    uintptr_t unk180[(0x1B8 - 0x180) >> 3];
    DynArray<void*> unk1B8;                                                 // 1B8
    DynArray<void*> unk1C8;                                                 // 1C8
    uintptr_t unk1D8;                                                       // 1D8
    uintptr_t unk1E0;                                                       // 1E0
    uintptr_t unk1E8;                                                       // 1E8
    uintptr_t unk1F0;                                                       // 1F0
    CGameuiCharacterCreationPuppetPreviewGameController* previewController; // 1F8
    uintptr_t unk200;                                                       // 200
    uintptr_t unk208;                                                       // 208
    uintptr_t unk210;                                                       // 210
    uintptr_t unk218;                                                       // 218
    uintptr_t unk220;                                                       // 220
    uintptr_t unk228;                                                       // 228
    uintptr_t unk230;                                                       // 230
    DynArray<void*> unk238;                                                 // 238
    uintptr_t unk248;                                                       // 248
    uintptr_t unk250;                                                       // 250
    uintptr_t unk258;                                                       // 258
    DynArray<void*> unk260;                                                 // 260
    uintptr_t unk270;                                                       // 270
    uintptr_t unk278;                                                       // 278
    CScnSceneSystem* scnSceneSystem;                                        // 280
    uintptr_t unk288[(0x2B8 - 0x288) >> 3];
    DynArray<Handle<IScriptable>> controllers; // 2B8 - Genital controllers?
};
RED4EXT_ASSERT_OFFSET(CGameuiCharacterCustomizationSystem, appearanceChanger, 0x48);
RED4EXT_ASSERT_OFFSET(CGameuiCharacterCustomizationSystem, unk158, 0x158);
RED4EXT_ASSERT_OFFSET(CGameuiCharacterCustomizationSystem, previewController, 0x1F8);
RED4EXT_ASSERT_OFFSET(CGameuiCharacterCustomizationSystem, controllers, 0x2B8);
RED4EXT_ASSERT_SIZE(CGameuiCharacterCustomizationSystem, 0x2C8);

struct CGameuiCharacterCustomizationInfo : IScriptable
{
    CName name;                                           // 40
    CName uiSlot;                                         // 48
    CString localizedName;                                // 50
    uint32_t defaultIndex;                                // 70
    uint32_t index;                                       // 74
    bool hidden;                                          // 78
    bool enabled;                                         // 79
    uint16_t pad7A;                                       // 7A
    CName link;                                           // 80
    bool linkController;                                  // 88
    uint8_t pad89;                                        // 89
    uint16_t pad8A;                                       // 8A
    uint32_t censorFlag;                                  // 8C
    uint64_t censorFlagAction;                            // 90
    DynArray<CGameuiCharacterCustomizationAction*> unk98; // 98
};
RED4EXT_ASSERT_SIZE(CGameuiCharacterCustomizationInfo, 0xA8);

struct CGameuiAppearanceInfo : CGameuiCharacterCustomizationInfo
{
    uintptr_t resource;                                        // A8
    DynArray<CGameuiIndexedAppearanceDefinition*> definitions; // B0
    bool useThumbnails;                                        // C0
};

struct CGameuiMorphInfo : CGameuiCharacterCustomizationInfo
{
    DynArray<void*> unkA8;
};

struct CGameuiSwitcherInfo : CGameuiCharacterCustomizationInfo
{
    DynArray<void*> unkA8;
};

struct CGameuiCharacterCustomizationOptionImpl : IScriptable
{
    virtual void GetGameuiMorphInfo(Handle<CGameuiMorphInfo>& unk1) = 0;           // 118
    virtual void GetGameuiAppearanceInfo(Handle<CGameuiAppearanceInfo>& unk1) = 0; // 120
    virtual void GetGameuiSwitcherInfo(Handle<CGameuiSwitcherInfo>& unk1) = 0;     // 128
    virtual void Unk_130(int32_t unk1) = 0;

    Handle<CGameuiCharacterCustomizationInfo> info; // 40
    uint32_t bodyPart;                              // 50 - Enum
    int32_t prevIndex;                              // 54
    int32_t currIndex;                              // 58
    bool isActive;                                  // 5C
    bool isCensored;                                // 5D
};
RED4EXT_ASSERT_SIZE(CGameuiCharacterCustomizationOptionImpl, 0x60);
} // namespace RED4ext
