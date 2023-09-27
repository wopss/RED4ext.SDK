#pragma once

#include <RED4ext/CName.hpp>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/LayerProxy.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/Widget.hpp>

namespace RED4ext::ink
{
struct Widget;

struct IWidgetLogicController : IScriptable
{
    static constexpr const char* NAME = "inkIWidgetLogicController";
    static constexpr const char* ALIAS = "inkILogicController";

    virtual void OnInitialize() = 0;              // 108
    virtual void OnUninitialize() = 0;            // 110
    virtual void OnArrangeChildrenComplete() = 0; // 118

    WeakHandle<Widget> widget;         // 40
    WeakHandle<LayerProxy> layerProxy; // 50
    WeakHandle<ISerializable> unk60;   // 60
    CName audioMetadataName;           // 70
};
RED4EXT_ASSERT_SIZE(IWidgetLogicController, 0x78);
} // namespace RED4ext::ink
