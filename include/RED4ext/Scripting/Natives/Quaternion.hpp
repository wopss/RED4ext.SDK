#pragma once

#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector4.hpp>

#include <cstdint>

namespace RED4ext
{
struct __declspec(align(0x10)) Quaternion
{
    static constexpr const char* NAME = "Quaternion";
    static constexpr const char* ALIAS = NAME;

    Quaternion()
        : i(0)
        , j(0)
        , k(0)
        , r(1)
    {
    }

    Quaternion(float aI, float aJ, float aK, float aR)
        : i(aI)
        , j(aJ)
        , k(aK)
        , r(aR)
    {
    }

    inline Quaternion operator*(const Quaternion& aOther) const
    {
        return {r * aOther.i + i * aOther.r + j * aOther.k - k * aOther.j,
                r * aOther.j + j * aOther.r + k * aOther.i - i * aOther.k,
                r * aOther.k + k * aOther.r + i * aOther.j - j * aOther.i,
                r * aOther.r - i * aOther.i - j * aOther.j - k * aOther.k};
    }

    inline Vector4 operator*(const Vector4& aVector) const
    {
        return Transform(aVector);
    }

    inline Quaternion operator*(const float aScalar) const
    {
        return {i * aScalar, j * aScalar, k * aScalar, r * aScalar};
    }

    inline Quaternion operator/(const float aScalar) const
    {
        return {i / aScalar, j / aScalar, k / aScalar, r / aScalar};
    }

    inline Vector4 Transform(const Vector4& aVector) const
    {
        const Vector4 q = Normalized().AsVector4();
        const Vector4 t = q.Cross(aVector) * 2.0f; // t = 2 * (q x v)
        return aVector + t * q.W + q.Cross(t);     // v + (w * t) + (q x t)
    }

    inline Quaternion Normalized() const
    {
        const float mag = Magnitude();
        return mag != 0 ? *this * (1.0f / mag) : *this;
    }

    inline float MagnitudeSquared() const
    {
        return i * i + j * j + k * k + r * r;
    }

    inline float Magnitude() const
    {
        return std::sqrtf(MagnitudeSquared());
    }

    inline Quaternion Conjugate() const
    {
        return {-i, -j, -k, r};
    }

    inline Quaternion Inverse() const
    {
        return Conjugate() * (1.0f / MagnitudeSquared());
    }

    inline Vector3 AxisX() const
    {
        return {1.0f - 2.0f * (j * j + k * k), 2.0f * (i * j + r * k), 2.0f * (i * k - r * j)};
    }

    inline Vector3 AxisY() const
    {
        return {2.0f * (i * j - r * k), 1.0f - 2.0f * (i * i + k * k), 2.0f * (j * k + r * i)};
    }

    inline Vector3 AxisZ() const
    {
        return {2.0f * (i * k + r * j), 2.0f * (j * k - r * i), 1.0f - 2.0f * (i * i + j * j)};
    }

    inline Vector4 AsVector4() const
    {
        return {i, j, k, r};
    }

    float i; // 00
    float j; // 04
    float k; // 08
    float r; // 0C
};
RED4EXT_ASSERT_SIZE(Quaternion, 0x10);

inline Vector4 operator*(const Vector4& aVector, const Quaternion& aQuaternion)
{
    return aQuaternion.Transform(aVector);
}
} // namespace RED4ext
