#pragma once

#include <cstdint>

#include <RED4ext/CName.hpp>
#include <RED4ext/CString.hpp>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/HashMap.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>

namespace RED4ext
{
// clang-format off
namespace world { struct RuntimeSystemEntityAppearanceChanger; }
namespace ent { struct MorphTargetManagerComponent; }
namespace scn { struct SceneSystem; }
namespace game { struct Puppet; }
// clang-format on

namespace game::ui
{
    struct CharacterCustomizationState;
    struct CharacterCustomizationInfoResource;
    struct CharacterCreationPuppetPreviewGameController;
    struct CharacterCustomizationInfo;
    struct CharacterCustomizationOptionImpl;
    struct CharacterCustomizationAction;
    struct IndexedAppearanceDefinition;
    struct ICharacterCustomizationComponent;
    struct PreviewGameController;

    struct CharacterCustomizationSystem : IScriptable
    {
        virtual void sub_110() = 0;
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
        virtual void LoadGenderCustomizationData(Handle<game::Puppet>& puppet, bool isMale,
                                                 Handle<PreviewGameController>& ccPuppetPreviewGameController) = 0;
        virtual void sub_1E8() = 0;
        virtual void GetBodyOptions(const CName& presetName,
                                    DynArray<Handle<CharacterCustomizationOptionImpl>>& options) = 0;
        virtual void GetHeadOptions(const CName& presetName,
                                    DynArray<Handle<CharacterCustomizationOptionImpl>>& options) = 0;
        virtual void GetArmsOptions(const CName& presetName,
                                    DynArray<Handle<CharacterCustomizationOptionImpl>>& options) = 0;
        virtual void sub_208() = 0;
        virtual void sub_210() = 0;
        virtual void ApplyChangeToOption(Handle<CharacterCustomizationOptionImpl>& option, int32_t newIndex) = 0;
        virtual void sub_220() = 0;
        virtual void sub_228() = 0;
        virtual void sub_230() = 0;
        virtual void sub_238() = 0;
        virtual void sub_240() = 0;
        virtual void sub_248() = 0;
        virtual void sub_250() = 0;
        virtual void sub_258() = 0;

        uintptr_t unk40;                                                        // 40
        world::RuntimeSystemEntityAppearanceChanger* appearanceChanger;         // 48
        uintptr_t unk50;                                                        // 50
        Handle<CharacterCustomizationState> customizationState;                 // 58
        uintptr_t unk68;                                                        // 68 - SpinLock
        Handle<CharacterCustomizationInfoResource> resource;                    // 70
        uintptr_t unk80;                                                        // 80
        uintptr_t unk88;                                                        // 88
        DynArray<Handle<CharacterCustomizationOptionImpl>> headOptions;         // 90
        CName unkA0;                                                            // A0
        DynArray<CName> unkA8;                                                  // A8
        DynArray<Handle<CharacterCustomizationOptionImpl>> armsOptions;         // B8
        CName unkC8;                                                            // C8
        DynArray<CName> unkD0;                                                  // D0
        Handle<game::Puppet> unkE0;                                             // E0
        Handle<ent::MorphTargetManagerComponent> unkF0;                         // F0
        DynArray<Handle<CharacterCustomizationOptionImpl>> bodyOptions;         // 100
        uintptr_t unk110;                                                       // 110
        DynArray<CName> unk118;                                                 // 118
        DynArray<void*> unk128;                                                 // 128
        DynArray<void*> unk138;                                                 // 138
        DynArray<void*> unk148;                                                 // 148
        HashMap<uint64_t, uint64_t> unk158;                                     // 158
        uintptr_t unk188[(0x1B8 - 0x188) >> 3];                                 // 188
        DynArray<void*> unk1B8;                                                 // 1B8
        DynArray<void*> unk1C8;                                                 // 1C8
        uintptr_t unk1D8;                                                       // 1D8
        uintptr_t unk1E0;                                                       // 1E0
        uintptr_t unk1E8;                                                       // 1E8
        uintptr_t unk1F0;                                                       // 1F0
        Handle<CharacterCreationPuppetPreviewGameController> previewController; // 1F8
        uintptr_t unk208;                                                       // 208
        uintptr_t unk210;                                                       // 210
        uintptr_t unk218;                                                       // 218
        Handle<CharacterCustomizationOptionImpl> optionToChange;                // 220
        int32_t newIndex;                                                       // 230
        uint32_t unk234;                                                        // 234
        DynArray<void*> unk238;                                                 // 238
        uintptr_t unk248;                                                       // 248
        uintptr_t unk250;                                                       // 250
        uintptr_t unk258;                                                       // 258
        DynArray<void*> unk260;                                                 // 260
        uintptr_t unk270;                                                       // 270
        CName unk278;                                                           // 278
        scn::SceneSystem* scnSceneSystem;                                       // 280
        WeakHandle<CharacterCustomizationSystem> unk290;                        // 290
        uintptr_t unk298;                                                       // 298
        uintptr_t unk2A0;                                                       // 2A0
        uintptr_t unk2A8;                                                       // 2A8
        uintptr_t unk2B0;                                                       // 2B0
        DynArray<Handle<ICharacterCustomizationComponent>> controllers;         // 2B8 - Genital controllers?
    };
    RED4EXT_ASSERT_OFFSET(CharacterCustomizationSystem, appearanceChanger, 0x48);
    RED4EXT_ASSERT_OFFSET(CharacterCustomizationSystem, unk158, 0x158);
    RED4EXT_ASSERT_OFFSET(CharacterCustomizationSystem, previewController, 0x1F8);
    RED4EXT_ASSERT_OFFSET(CharacterCustomizationSystem, controllers, 0x2B8);
    RED4EXT_ASSERT_SIZE(CharacterCustomizationSystem, 0x2C8);
} // namespace game::ui
} // namespace RED4ext

#ifdef RED4EXT_HEADER_ONLY
#include <RED4ext/Scripting/Natives/CharacterCustomization-inl.hpp>
#endif
