#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/IVisualComponent.hpp>

namespace RED4ext
{
namespace ent { struct SkinningBinding; }

namespace ent
{
struct __declspec(align(0x10)) ISkinTargetComponent : ent::IVisualComponent
{
    static constexpr const char* NAME = "entISkinTargetComponent";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk140[0x180 - 0x140]; // 140
    Handle<ent::SkinningBinding> skinning; // 180
    uint8_t unk190[0x1D0 - 0x190]; // 190
    bool useSkinningLOD; // 1D0
    uint8_t unk1D1[0x1E0 - 0x1D1]; // 1D1
};
RED4EXT_ASSERT_SIZE(ISkinTargetComponent, 0x1E0);
} // namespace ent
using entISkinTargetComponent = ent::ISkinTargetComponent;
} // namespace RED4ext

// clang-format on
