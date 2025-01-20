#pragma once

#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>
#include <RED4ext/Scripting/Natives/Generated/ECustomCameraTarget.hpp>
#include <RED4ext/Scripting/Natives/Generated/RenderSceneLayerMask.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/EntityID.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/IComponent.hpp>
#include <RED4ext/Scripting/Natives/Generated/red/TagList.hpp>
#include <RED4ext/Scripting/Natives/ScriptGameInstance.hpp>

namespace RED4ext
{
namespace world
{
struct RuntimeScene;
}

enum class EntityStatus : uint8_t
{
    Undefined = 0,
    Initializing = 1,
    Detached = 2,
    Attaching = 3,
    Attached = 4,
    Detaching = 5,
    Uninitializing = 6,
    Uninitialized = 7,
};

namespace ent
{
struct IPlacedComponent;

struct Entity : IScriptable
{
    static constexpr const char* NAME = "entEntity";
    static constexpr const char* ALIAS = "Entity";

    uint32_t unk40;                            // 40
    uint32_t unk44;                            // 44
    EntityID entityID;                         // 48
    CName appearanceName;                      // 50
    uint64_t unk58;                            // 58
    ResourcePath templatePath;                 // 60
    uint64_t unk68;                            // 68
    uint8_t componentsStorage[0x30];           // 70 - ComponentsStorage but without Handle?
    DynArray<Handle<IComponent>> components;   // A0 - Part of ComponentsStorage
    IPlacedComponent* transformComponent;      // B0
    world::RuntimeScene* runtimeScene;         // B8
    ScriptGameInstance* gameInstance;          // C0
    void* unkC8;                               // C8
    void* unkD0;                               // D0
    uint8_t eventManager[0x138 - 0xD8];        // D8
    red::TagList visualTags;                   // 138
    uint8_t unk148[0x154 - 0x148];             // 148
    ECustomCameraTarget customCameraTarget;    // 154
    uint8_t unk155;                            // 155
    EntityStatus status;                       // 156
    uint8_t unk157[0x15B - 0x157];             // 157
    RenderSceneLayerMask renderSceneLayerMask; // 15B
    uint8_t unk15C[0x160 - 0x15C];             // 15C
};
RED4EXT_ASSERT_SIZE(Entity, 0x160);
} // namespace ent
} // namespace RED4ext
