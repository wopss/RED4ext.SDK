#pragma once

#include <RED4ext/Common.hpp>
#include <RED4ext/ISerializable.hpp>

namespace RED4ext::ink
{
struct Layer;
struct WidgetLibraryResource;

struct LayerProxy : ISerializable
{
    static constexpr const char* NAME = "inkLayerProxy";
    static constexpr const char* ALIAS = NAME;

    bool isFullscreen;                          // 30 -- Indicates that layer is inkFullscreenLayer
    WeakHandle<Layer> layer;                    // 38
    WeakHandle<ISerializable> unk48;            // 48
    WeakHandle<WidgetLibraryResource> resource; // 58
};
RED4EXT_ASSERT_SIZE(LayerProxy, 0x68);
} // namespace RED4ext::ink
