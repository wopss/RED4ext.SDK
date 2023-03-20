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
};
RED4EXT_ASSERT_SIZE(ControllerProcessor, 0x60);
RED4EXT_ASSERT_OFFSET(ControllerProcessor, controllers, 0x50);
} // namespace RED4ext::ink
