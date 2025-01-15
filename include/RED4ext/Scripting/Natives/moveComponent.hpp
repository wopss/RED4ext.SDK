#pragma once

#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/WorldTransform.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/IMoverComponent.hpp>
#include <RED4ext/Scripting/Natives/Vector3.hpp>
#include <RED4ext/Scripting/Natives/Vector4.hpp>
#include <cstdint>

namespace RED4ext
{
namespace move
{
struct Component : ent::IMoverComponent
{
    static constexpr const char* NAME = "moveComponent";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk90[0x1C0 - 0x90];   // 90
    WorldTransform worldTransform; // 1C0
    uint8_t unk1E0[0x1E8 - 0x1E0]; // 1E0
    Vector4 position;              // 1E8
    uint8_t unk1F8[0x220 - 0x1F8]; // 1F8
    Vector3 speed;                 // 220
    float deltaFrame;              // 22C
    uint8_t unk230[0x2C0 - 0x230]; // 230
};
RED4EXT_ASSERT_SIZE(Component, 0x2C0);
RED4EXT_ASSERT_OFFSET(Component, worldTransform, 0x1C0);
RED4EXT_ASSERT_OFFSET(Component, position, 0x1E8);
RED4EXT_ASSERT_OFFSET(Component, speed, 0x220);
RED4EXT_ASSERT_OFFSET(Component, deltaFrame, 0x22C);
} // namespace move
using moveComponent = move::Component;
} // namespace RED4ext
