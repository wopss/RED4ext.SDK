#pragma once

#include <RED4ext/CName.hpp>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/IMaterial.hpp>
#include <RED4ext/Scripting/Natives/Generated/MaterialParameterInstance.hpp>

namespace RED4ext
{
struct CMaterialInstance : IMaterial
{
    static constexpr const char* NAME = "CMaterialInstance";
    static constexpr const char* ALIAS = NAME;

    DynArray<MaterialParameterInstance> params; // 78
    bool enableMask;                            // 88
    uint8_t resourceVersion;                    // 89
    uint8_t unk8A[0x90 - 0x8A];                 // 8A
    CName audioTag;                             // 90
};
RED4EXT_ASSERT_SIZE(CMaterialInstance, 0x98);
} // namespace RED4ext
