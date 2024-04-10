#pragma once

#include <RED4ext/Common.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector2.hpp>

namespace RED4ext::ink
{
namespace anim
{
struct Processor;
}

struct ControllerProcessor;
struct LayerProxy;
struct SpawningProcessor;
struct VirtualWindow;
struct WidgetLibraryItemInstance;

struct Layer : ISerializable
{
    static constexpr const char* NAME = "inkLayer";
    static constexpr const char* ALIAS = NAME;

    Vector2 size;                                    // 30
    void* unk38;                                     // 38
    Handle<VirtualWindow> window;                    // 40
    Handle<WidgetLibraryItemInstance> libraryItem;   // 50
    Handle<ControllerProcessor> controllerProcessor; // 60
    Handle<anim::Processor> animationProcessor;      // 70
    Handle<SpawningProcessor> spawningProcessor;     // 80
    Handle<LayerProxy> layerProxy;                   // 90
    void* unkA0;                                     // A0
    void* unkA8;                                     // A8
    bool active;                                     // B0
    uint8_t unkB1[0xB7 - 0xB1];                      // B1
    bool isInteractive;                              // B7
    bool useGameInput;                               // B8
    uint8_t unkB9[0xC0 - 0xB9];                      // B9
    CName inputContext;                              // C0
    uint8_t unkC8[0x150 - 0xC8];                     // C8
};
RED4EXT_ASSERT_SIZE(Layer, 0x150);
RED4EXT_ASSERT_OFFSET(Layer, window, 0x40);
RED4EXT_ASSERT_OFFSET(Layer, controllerProcessor, 0x60);
RED4EXT_ASSERT_OFFSET(Layer, isInteractive, 0xB7);
RED4EXT_ASSERT_OFFSET(Layer, inputContext, 0xC0);
} // namespace RED4ext::ink
