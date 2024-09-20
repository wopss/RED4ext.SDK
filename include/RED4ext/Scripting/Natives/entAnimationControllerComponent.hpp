#pragma once

#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/AnimDatabaseCollection.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/IKTargetParams_Update.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/IKTargetRef.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/LookAtParams_UpdatePositions.hpp>
#include <RED4ext/Scripting/Natives/Generated/anim/LookAtRef.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/IComponent.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/IOrientationProvider.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/IPositionProvider.hpp>
#include <cstdint>

namespace RED4ext
{
namespace anim
{
struct ActionAnimDatabase;
}
namespace ent
{
struct AnimationControlBinding;
struct AnimationControllerComponent;

struct IKTargetController
{
    struct IKTargetData
    {
        anim::IKTargetRef targetReference;                // 00
        Handle<IPositionProvider> positionProvider;       // 10
        Handle<IOrientationProvider> orientationProvider; // 20
    };
    RED4EXT_ASSERT_SIZE(IKTargetData, 0x30);
    RED4EXT_ASSERT_OFFSET(IKTargetData, targetReference, 0x00);
    RED4EXT_ASSERT_OFFSET(IKTargetData, positionProvider, 0x10);
    RED4EXT_ASSERT_OFFSET(IKTargetData, orientationProvider, 0x20);

    AnimationControllerComponent* animationControllerComponent; // 00
    uint8_t unk08[0x10 - 0x8];                                  // 08
    DynArray<IKTargetData> targetData;                          // 10
    Handle<anim::IKTargetParams_Update> ikParams;               // 20
};
RED4EXT_ASSERT_SIZE(IKTargetController, 0x30);
RED4EXT_ASSERT_OFFSET(IKTargetController, animationControllerComponent, 0x00);
RED4EXT_ASSERT_OFFSET(IKTargetController, targetData, 0x10);
RED4EXT_ASSERT_OFFSET(IKTargetController, ikParams, 0x20);

struct LookAtController
{
    struct LookAtData
    {
        anim::LookAtRef lookAtRef;                  // 00
        Handle<IPositionProvider> positionProvider; // 10
        uint32_t unk20;                             // 20
    };
    RED4EXT_ASSERT_SIZE(LookAtData, 0x28);
    RED4EXT_ASSERT_OFFSET(LookAtData, lookAtRef, 0x00);
    RED4EXT_ASSERT_OFFSET(LookAtData, positionProvider, 0x10);

    struct AdditionalLookAtData
    {
        CName partName;                       // 00
        DynArray<anim::LookAtRef> lookAtRefs; // 08
    };
    RED4EXT_ASSERT_SIZE(AdditionalLookAtData, 0x18);
    RED4EXT_ASSERT_OFFSET(AdditionalLookAtData, partName, 0x00);
    RED4EXT_ASSERT_OFFSET(AdditionalLookAtData, lookAtRefs, 0x08);

    AnimationControllerComponent* animationControllerComponent; // 00
    uint8_t unk08[0x18 - 0x08];                                 // 08
    bool usingTPPCamera;                                        // 18
    DynArray<LookAtData> lookAtData;                            // 20
    DynArray<AdditionalLookAtData> additionalLookAtData;        // 30
    Handle<anim::LookAtParams_UpdatePositions> lookAtParams;    // 40
    uint8_t unk50[0x88 - 0x50];                                 // 50
};
RED4EXT_ASSERT_SIZE(LookAtController, 0x88);
RED4EXT_ASSERT_OFFSET(LookAtController, animationControllerComponent, 0x00);
RED4EXT_ASSERT_OFFSET(LookAtController, lookAtData, 0x20);
RED4EXT_ASSERT_OFFSET(LookAtController, additionalLookAtData, 0x30);
RED4EXT_ASSERT_OFFSET(LookAtController, lookAtParams, 0x40);

struct AnimationControllerComponent : ent::IComponent
{
    static constexpr const char* NAME = "entAnimationControllerComponent";
    static constexpr const char* ALIAS = "AnimationControllerComponent";

    uint8_t unk90[0xF8 - 0x90];                          // 90
    Ref<anim::ActionAnimDatabase> actionAnimDatabaseRef; // F8
    anim::AnimDatabaseCollection animDatabaseCollection; // 110
    LookAtController lookAtController;                   // 120
    IKTargetController ikTargetController;               // 1A8
    bool unk1D8;                                         // 1D8
    Handle<ent::AnimationControlBinding> controlBinding; // 1E0
};
RED4EXT_ASSERT_SIZE(AnimationControllerComponent, 0x1F0);
RED4EXT_ASSERT_OFFSET(AnimationControllerComponent, actionAnimDatabaseRef, 0xF8);
RED4EXT_ASSERT_OFFSET(AnimationControllerComponent, animDatabaseCollection, 0x110);
RED4EXT_ASSERT_OFFSET(AnimationControllerComponent, lookAtController, 0x120);
RED4EXT_ASSERT_OFFSET(AnimationControllerComponent, ikTargetController, 0x1A8);
RED4EXT_ASSERT_OFFSET(AnimationControllerComponent, controlBinding, 0x1E0);

} // namespace ent
} // namespace RED4ext
