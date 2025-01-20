#pragma once

#include <RED4ext/CName.hpp>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/IAttachment.hpp>

namespace RED4ext
{
namespace ent
{
struct Entity;

struct IComponent : IScriptable
{
    static constexpr const char* NAME = "entIComponent";
    static constexpr const char* ALIAS = "IComponent";

    CName name;                                // 40
    CName appearanceName;                      // 48
    Entity* owner;                             // 50
    void* unk58;                               // 58
    CRUID id;                                  // 60
    ResourcePath appearancePath;               // 68
    DynArray<Handle<IAttachment>> attachments; // 70
    uint16_t unk80;                            // 80
    uint8_t unk82[0x8B - 0x82];                // 82
    bool isEnabled;                            // 8B
    bool isReplicable;                         // 8C
    uint8_t unk8D[0x90 - 0x8D];                // 8D
};
RED4EXT_ASSERT_SIZE(IComponent, 0x90);
RED4EXT_ASSERT_OFFSET(IComponent, isEnabled, 0x8B);
} // namespace ent
} // namespace RED4ext
