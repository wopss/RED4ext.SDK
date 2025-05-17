#pragma once

#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/FixedPoint.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector4.hpp>

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

    inline Vector3 AsVector3() const noexcept
    {
        return {
            static_cast<float>(x.Bits) / (2 << 16),
            static_cast<float>(y.Bits) / (2 << 16),
            static_cast<float>(z.Bits) / (2 << 16),
        };
    }

    inline Vector4 AsVector4() const noexcept
    {
        return {
            static_cast<float>(x.Bits) / (2 << 16),
            static_cast<float>(y.Bits) / (2 << 16),
            static_cast<float>(z.Bits) / (2 << 16),
            0,
        };
    }

    FixedPoint x; // 00
    FixedPoint y; // 04
    FixedPoint z; // 08
};
RED4EXT_ASSERT_SIZE(WorldPosition, 0xC);
} // namespace RED4ext
