#pragma once

#include <RED4ext/Common.hpp>
#include <cstdint>

namespace RED4ext
{
struct Vector4
{
    static constexpr const char* NAME = "Vector4";
    static constexpr const char* ALIAS = NAME;

    Vector4()
        : X(0)
        , Y(0)
        , Z(0)
        , W(0)
    {
    }

    Vector4(float aX, float aY, float aZ, float aW)
        : X(aX)
        , Y(aY)
        , Z(aZ)
        , W(aW)
    {
    }

    inline Vector4& operator=(const Vector4& aOther)
    {
        if (this != std::addressof(aOther))
        {
            X = aOther.X;
            Y = aOther.Y;
            Z = aOther.Z;
            W = aOther.W;
        }

        return *this;
    }

    inline Vector4 operator+(const Vector4& aOther) const
    {
        return {X + aOther.X, Y + aOther.Y, Z + aOther.Z, W + aOther.W};
    }

    inline Vector4 operator-() const
    {
        return {-X, -Y, -Z, -W};
    }

    inline Vector4 operator-(const Vector4& aOther) const
    {
        return {X - aOther.X, Y - aOther.Y, Z - aOther.Z, W - aOther.W};
    }

    inline Vector4 operator*(const float aScalar) const
    {
        return {X * aScalar, Y * aScalar, Z * aScalar, W * aScalar};
    }

    inline Vector4 operator*(const Vector4& aOther) const
    {
        return {X * aOther.X, Y * aOther.Y, Z * aOther.Z, W * aOther.W};
    }

    inline bool operator==(const Vector4& aOther) const
    {
        return X == aOther.X && Y == aOther.Y && Z == aOther.Z && W == aOther.W;
    }

    inline bool operator!=(const Vector4& aOther) const
    {
        return !(*this == aOther);
    }

    inline float Magnitude() const
    {
        return std::sqrt(X * X + Y * Y + Z * Z + W * W);
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
            W *= invertedMag;
        }
    }

    inline float Dot(const Vector4& aOther) const
    {
        return X * aOther.X + Y * aOther.Y + Z * aOther.Z + W * aOther.W;
    }

    inline Vector4 Cross(const Vector4& aOther) const
    {
        return {
            Y * aOther.Z - Z * aOther.Y, Z * aOther.X - X * aOther.Z, X * aOther.Y - Y * aOther.X,
            0.f // W is ignored for cross of Vector4
        };
    }

    float X; // 00
    float Y; // 04
    float Z; // 08
    float W; // 0C
};
RED4EXT_ASSERT_SIZE(Vector4, 0x10);
} // namespace RED4ext
