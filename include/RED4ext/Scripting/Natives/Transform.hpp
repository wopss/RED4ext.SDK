#pragma once

#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Quaternion.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector4.hpp>

#include <cstdint>

namespace RED4ext
{
struct __declspec(align(0x10)) Transform
{
    static constexpr const char* NAME = "Transform";
    static constexpr const char* ALIAS = NAME;

    Transform() = default;

    Transform(const Vector3& aPosition, const Quaternion& aOrientation)
        : position(aPosition, 0)
        , orientation(aOrientation)
    {
    }

    Transform(const Vector4& aPosition, const Quaternion& aOrientation)
        : position(aPosition)
        , orientation(aOrientation)
    {
        position.W = 0;
    }

    inline Transform operator*(const Transform& aOther) const
    {
        const auto finalOrientation = (aOther.orientation * orientation).Normalized();
        const auto finalPosition = (aOther.orientation * position) + aOther.position;

        return {finalPosition, finalOrientation};
    }

    inline Transform Inverse() const
    {
        const auto inverseOrientation = orientation.Conjugate();
        const auto inversePosition = inverseOrientation * -position;

        return {inversePosition, inverseOrientation};
    }

    Vector4 position;       // 00
    Quaternion orientation; // 10
};
RED4EXT_ASSERT_SIZE(Transform, 0x20);
} // namespace RED4ext
