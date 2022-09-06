#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/EMaterialPriority.hpp>
#include <RED4ext/Scripting/Natives/Generated/ERenderMaterialType.hpp>
#include <RED4ext/Scripting/Natives/Generated/IMaterialDefinition.hpp>
#include <RED4ext/Scripting/Natives/Generated/MaterialTechnique.hpp>
#include <RED4ext/Scripting/Natives/Generated/MaterialUsedParameter.hpp>
#include <RED4ext/Scripting/Natives/Generated/SamplerStateInfo.hpp>

namespace RED4ext
{
struct CMaterialParameter;

struct CMaterialTemplate : IMaterialDefinition
{
    static constexpr const char* NAME = "CMaterialTemplate";
    static constexpr const char* ALIAS = NAME;

    NativeArray<DynArray<Handle<CMaterialParameter>>, 3> parameters; // E0
    NativeArray<DynArray<MaterialUsedParameter>, 3> usedParameters; // 110
    NativeArray<DynArray<SamplerStateInfo>, 3> samplerStates; // 140
    DynArray<MaterialTechnique> techniques; // 170
    CName audioTag; // 180
    CName name; // 188
    uint8_t unk190[0x198 - 0x190]; // 190
    uint8_t resourceVersion; // 198
    EMaterialPriority materialPriority; // 199
    ERenderMaterialType materialType; // 19A
    uint8_t unk19B[0x1A0 - 0x19B]; // 19B
};
RED4EXT_ASSERT_SIZE(CMaterialTemplate, 0x1A0);
} // namespace RED4ext

// clang-format on
