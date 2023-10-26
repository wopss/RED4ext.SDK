#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/net/PeerID.hpp>
#include <RED4ext/Scripting/Natives/Generated/net/Time.hpp>

namespace RED4ext
{
namespace grs
{
struct __declspec(align(0x10)) HeistPlayerGameInfo
{
    static constexpr const char* NAME = "grsHeistPlayerGameInfo";
    static constexpr const char* ALIAS = NAME;

    net::PeerID peerID; // 00
    bool isReady; // 01
    bool isInGame; // 02
    bool isDead; // 03
    bool isRespawning; // 04
    uint8_t unk05[0x8 - 0x5]; // 5
    net::Time spawnTime; // 08
    uint32_t killCount; // 10
    uint32_t deathCount; // 14
    CString characterRecord; // 18
    uint8_t unk38[0x70 - 0x38]; // 38
};
RED4EXT_ASSERT_SIZE(HeistPlayerGameInfo, 0x70);
} // namespace grs
using grsHeistPlayerGameInfo = grs::HeistPlayerGameInfo;
} // namespace RED4ext

// clang-format on
