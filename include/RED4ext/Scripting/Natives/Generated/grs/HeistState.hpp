#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/grs/HeistPlayerGameInfo.hpp>
#include <RED4ext/Scripting/Natives/Generated/grs/HeistStatus.hpp>
#include <RED4ext/Scripting/Natives/Generated/net/Time.hpp>

namespace RED4ext
{
namespace grs
{
struct __declspec(align(0x10)) HeistState
{
    static constexpr const char* NAME = "grsHeistState";
    static constexpr const char* ALIAS = NAME;

    uint8_t unk00[0x18 - 0x0]; // 0
    net::Time time; // 18
    grs::HeistStatus status; // 20
    uint8_t unk24[0x30 - 0x24]; // 24
#pragma warning(suppress : 4324)
    alignas(16) StaticArray<grs::HeistPlayerGameInfo, 7> playersInfo; // 30
    uint8_t unk350[0x3D0 - 0x350]; // 350
};
RED4EXT_ASSERT_SIZE(HeistState, 0x3D0);
} // namespace grs
using grsHeistState = grs::HeistState;
} // namespace RED4ext

// clang-format on
