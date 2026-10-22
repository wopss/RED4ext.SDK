#pragma once

#include <RED4ext/Common.hpp>
#include <RED4ext/ISerializable.hpp>

namespace RED4ext::ink
{
struct IWidgetController;

struct ControllerProcessor : ISerializable
{
    static constexpr const char* NAME = "inkControllerProcessor";
    static constexpr const char* ALIAS = NAME;

    uint64_t unk30;                                  // 30
    DynArray<void*> unk38;                           // 38
    uint64_t unk48;                                  // 48
    DynArray<Handle<IWidgetController>> controllers; // 50
    uint8_t unk60[0x90 - 0x60];                      // 60
};
// Game 2.5 (3.0.88.46235): size 0x60 -> 0x90 (registration 0x164191A). The constructor (2.31 0x881C08, 2.5
// 0x39771C) initialises 0x30..0x5F with the same stores in both builds (0x50: 2.31 0x881C70, 2.5 0x39777C
// `mov qword ptr [r8+0x50], rax`) and in 2.5 constructs a new member at 0x60 (0x397788 `lea rcx, [r8+0x60]`).
RED4EXT_ASSERT_SIZE(ControllerProcessor, 0x90);
RED4EXT_ASSERT_OFFSET(ControllerProcessor, controllers, 0x50);
} // namespace RED4ext::ink
