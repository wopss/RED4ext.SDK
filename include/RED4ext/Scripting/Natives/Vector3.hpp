#pragma once

#include <RED4ext/Common.hpp>

#include <cstdint>

namespace RED4ext
{
struct Vector3
{
    static constexpr const char* NAME = "Vector3";
    static constexpr const char* ALIAS = NAME;

    Vector3()
        : X(0)
        , Y(0)
        , Z(0)
    {
    }

    Vector3(float aX, float aY, float aZ)
        : X(aX)
        , Y(aY)
        , Z(aZ)
    {
    }

    inline Vector3& operator=(const Vector3& aOther)
    {
        if (this != std::addressof(aOther))
        {
            X = aOther.X;
            Y = aOther.Y;
            Z = aOther.Z;
        }

        return *this;
    }

    inline Vector3 operator+(const Vector3& aOther) const
    {
        return {X + aOther.X, Y + aOther.Y, Z + aOther.Z};
    }

    inline Vector3 operator-() const
    {
        return {-X, -Y, -Z};
    }

    inline Vector3 operator-(const Vector3& aOther) const
    {
        return {X - aOther.X, Y - aOther.Y, Z - aOther.Z};
    }

    inline Vector3 operator*(float aScalar) const
    {
        return {X * aScalar, Y * aScalar, Z * aScalar};
    }

    inline Vector3 operator*(const Vector3& aOther) const
    {
        return {X * aOther.X, Y * aOther.Y, Z * aOther.Z};
    }

    inline bool operator==(const Vector3& aOther) const
    {
        return X == aOther.X && Y == aOther.Y && Z == aOther.Z;
    }

    inline bool operator!=(const Vector3& aOther) const
    {
        return !(*this == aOther);
    }

    inline float Magnitude() const
    {
        return std::sqrtf(X * X + Y * Y + Z * Z);
    }

    inline void Normalize()
    {
        const float mag = Magnitude();

        if (mag != 0) // prevent divide by zero
        {
            const float invertedMag = 1.f / mag; // invert magnitude so we only divide once

            X *= invertedMag;
            Y *= invertedMag;
            Z *= invertedMag;
        }
    }

    inline float Dot(const Vector3& aOther) const
    {
        return X * aOther.X + Y * aOther.Y + Z * aOther.Z;
    }

    inline Vector3 Cross(const Vector3& aOther) const
    {
        return {Y * aOther.Z - Z * aOther.Y, Z * aOther.X - X * aOther.Z, X * aOther.Y - Y * aOther.X};
    }

    inline Vector3 Min(const Vector3& aOther) const
    {
        return {(std::min)(X, aOther.X), (std::min)(Y, aOther.Y), (std::min)(Z, aOther.Z)};
    }

    inline Vector3 Max(const Vector3& aOther) const
    {
        return {(std::max)(X, aOther.X), (std::max)(Y, aOther.Y), (std::max)(Z, aOther.Z)};
    }

    float X; // 00
    float Y; // 04
    float Z; // 08
};
RED4EXT_ASSERT_SIZE(Vector3, 0xC);
} // namespace RED4ext
