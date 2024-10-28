#pragma once

#include <RED4ext/CString.hpp>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <cstdint>

namespace RED4ext
{
namespace world
{
struct WorldID
{
    static constexpr const char* NAME = "worldWorldID";
    static constexpr const char* ALIAS = NAME;

    ResourcePath worldPath;          // 00
    ResourcePath streamingWorldPath; // 08
    CString worldName;               // 10
    std::uint64_t unk30;             // 30
};
RED4EXT_ASSERT_SIZE(WorldID, 0x38);
RED4EXT_ASSERT_OFFSET(WorldID, worldPath, 0x0);
RED4EXT_ASSERT_OFFSET(WorldID, streamingWorldPath, 0x8);
RED4EXT_ASSERT_OFFSET(WorldID, worldName, 0x10);
RED4EXT_ASSERT_OFFSET(WorldID, unk30, 0x30);
} // namespace world
using worldWorldID = world::WorldID;
} // namespace RED4ext
