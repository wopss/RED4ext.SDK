#pragma once

#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/WorldTransform.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/IComponent.hpp>
#include <cstdint>

namespace RED4ext
{
namespace ent
{
struct ITransformBinding;
}

namespace ent
{
struct __declspec(align(0x10)) IPlacedComponent : ent::IComponent
{
    static constexpr const char* NAME = "entIPlacedComponent";
    static constexpr const char* ALIAS = "IPlacedComponent";

    struct ChildBinding
    {
        Handle<ent::IComponent> component;   // 00
        Handle<ent::IAttachment> attachment; // 10
    };

    Handle<ent::ITransformBinding> parentTransform; // 90
    DynArray<ChildBinding> childrenTransforms;      // A0
    uint8_t unkB0[0xC0 - 0xB0];                     // B0
    WorldTransform localTransform;                  // C0
    WorldTransform worldTransform;                  // E0
    Vector4 lastPosition;                           // 100
    Vector4 position;                               // 110
};
RED4EXT_ASSERT_SIZE(IPlacedComponent::ChildBinding, 0x20);
RED4EXT_ASSERT_OFFSET(IPlacedComponent::ChildBinding, component, 0x00);
RED4EXT_ASSERT_OFFSET(IPlacedComponent::ChildBinding, attachment, 0x10);

RED4EXT_ASSERT_SIZE(IPlacedComponent, 0x120);
RED4EXT_ASSERT_OFFSET(IPlacedComponent, parentTransform, 0x90);
RED4EXT_ASSERT_OFFSET(IPlacedComponent, localTransform, 0xC0);
RED4EXT_ASSERT_OFFSET(IPlacedComponent, worldTransform, 0xE0);
RED4EXT_ASSERT_OFFSET(IPlacedComponent, lastPosition, 0x100);
RED4EXT_ASSERT_OFFSET(IPlacedComponent, position, 0x110);
} // namespace ent
using entIPlacedComponent = ent::IPlacedComponent;
using IPlacedComponent = ent::IPlacedComponent;
} // namespace RED4ext
