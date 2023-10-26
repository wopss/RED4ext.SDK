#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/IVisualComponent.hpp>

namespace RED4ext
{
struct Bink;
namespace game { struct BinkMeshTargetBinding; }

namespace game
{
struct __declspec(align(0x10)) BinkComponent : ent::IVisualComponent
{
    static constexpr const char* NAME = "gameBinkComponent";
    static constexpr const char* ALIAS = "BinkComponent";

    uint8_t unk140[0x160 - 0x140]; // 140
    Handle<game::BinkMeshTargetBinding> meshTargetBinding; // 160
    uint8_t unk170[0x178 - 0x170]; // 170
    RaRef<Bink> binkResource; // 178
    CName videoPlayerName; // 180
    uint8_t unk188[0x190 - 0x188]; // 188
    CName audioEvent; // 190
    bool loopVideo; // 198
    bool forceVideoFrameRate; // 199
    uint8_t unk19A[0x1A0 - 0x19A]; // 19A
};
RED4EXT_ASSERT_SIZE(BinkComponent, 0x1A0);
} // namespace game
using gameBinkComponent = game::BinkComponent;
using BinkComponent = game::BinkComponent;
} // namespace RED4ext

// clang-format on
