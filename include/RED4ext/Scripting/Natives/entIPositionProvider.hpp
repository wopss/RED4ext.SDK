#pragma once

#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>
#include <RED4ext/Scripting/Natives/Vector3.hpp>

namespace RED4ext
{
namespace ent
{
struct IPositionProvider : IScriptable
{
    static constexpr const char* NAME = "entIPositionProvider";
    static constexpr const char* ALIAS = "IPositionProvider";

    Vector3 worldOffset;        // 40
    uint8_t unk4C[0x50 - 0x4C]; // 4C
};
RED4EXT_ASSERT_SIZE(IPositionProvider, 0x50);
RED4EXT_ASSERT_OFFSET(IPositionProvider, worldOffset, 0x40);
} // namespace ent
using entIPositionProvider = ent::IPositionProvider;
using IPositionProvider = ent::IPositionProvider;
} // namespace RED4ext
