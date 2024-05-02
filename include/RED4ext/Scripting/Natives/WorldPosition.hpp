#pragma once

#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/FixedPoint.hpp>

namespace RED4ext
{
struct WorldPosition
{
    static constexpr const char* NAME = "WorldPosition";
    static constexpr const char* ALIAS = NAME;

    WorldPosition() = default;

    WorldPosition(const Vector3& aPosition)
        : x{static_cast<int32_t>(aPosition.X * (2 << 16))}
        , y{static_cast<int32_t>(aPosition.Y * (2 << 16))}
        , z{static_cast<int32_t>(aPosition.Z * (2 << 16))}
    {
    }

    WorldPosition(const Vector4& aPosition)
        : x{static_cast<int32_t>(aPosition.X * (2 << 16))}
        , y{static_cast<int32_t>(aPosition.Y * (2 << 16))}
        , z{static_cast<int32_t>(aPosition.Z * (2 << 16))}
    {
    }

    FixedPoint x; // 00
    FixedPoint y; // 04
    FixedPoint z; // 08
};
RED4EXT_ASSERT_SIZE(WorldPosition, 0xC);
} // namespace RED4ext
