#pragma once

#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector3.hpp>

#include <cmath>
#include <cstdint>

namespace RED4ext
{
struct Vector3;

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

    Vector4(const Vector3& aOther, float aW = 1.0)
        : X(aOther.X)
        , Y(aOther.Y)
        , Z(aOther.Z)
        , W(aW)
    {
    }

    inline Vector4& operator=(const Vector4& aOther)
    {
        if (this != &aOther)
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

    inline Vector4& operator+=(const Vector4& aOther)
    {
        if (this != &aOther)
        {
            X += aOther.X;
            Y += aOther.Y;
            Z += aOther.Z;
            W += aOther.W;
        }

        return *this;
    }

    inline Vector4 operator-() const
    {
        return {-X, -Y, -Z, -W};
    }

    inline Vector4 operator-(const Vector4& aOther) const
    {
        return {X - aOther.X, Y - aOther.Y, Z - aOther.Z, W - aOther.W};
    }

    inline Vector4& operator-=(const Vector4& aOther)
    {
        if (this != &aOther)
        {
            X -= aOther.X;
            Y -= aOther.Y;
            Z -= aOther.Z;
            W -= aOther.W;
        }

        return *this;
    }

    inline Vector4 operator*(float aScalar) const
    {
        return {X * aScalar, Y * aScalar, Z * aScalar, W * aScalar};
    }

    inline Vector4& operator*=(float aScalar)
    {
        X *= aScalar;
        Y *= aScalar;
        Z *= aScalar;
        W *= aScalar;

        return *this;
    }

    inline Vector4 operator*(const Vector4& aOther) const
    {
        return {X * aOther.X, Y * aOther.Y, Z * aOther.Z, W * aOther.W};
    }

    inline Vector4& operator*=(const Vector4& aOther)
    {
        if (this != &aOther)
        {
            X *= aOther.X;
            Y *= aOther.Y;
            Z *= aOther.Z;
            W *= aOther.W;
        }

        return *this;
    }

    inline Vector4 operator/(float aScalar) const
    {
        return {X / aScalar, Y / aScalar, Z / aScalar, W / aScalar};
    }

    inline Vector4& operator/=(float aScalar)
    {
        X /= aScalar;
        Y /= aScalar;
        Z /= aScalar;
        W /= aScalar;

        return *this;
    }

    inline Vector4 operator/(const Vector4& aOther) const
    {
        return {X / aOther.X, Y / aOther.Y, Z / aOther.Z, W / aOther.W};
    }

    inline Vector4& operator/=(const Vector4& aOther)
    {
        if (this != &aOther)
        {
            X /= aOther.X;
            Y /= aOther.Y;
            Z /= aOther.Z;
            W /= aOther.W;
        }

        return *this;
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

    inline Vector4 Normalized() const
    {
        const float mag = Magnitude();
        return mag != 0 ? *this / mag : *this;
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

    inline Vector4 Min(const Vector4& aOther) const
    {
        return {(std::min)(X, aOther.X), (std::min)(Y, aOther.Y), (std::min)(Z, aOther.Z), (std::min)(W, aOther.W)};
    }

    inline Vector4 Max(const Vector4& aOther) const
    {
        return {(std::max)(X, aOther.X), (std::max)(Y, aOther.Y), (std::max)(Z, aOther.Z), (std::max)(W, aOther.W)};
    }

    inline Vector3 AsVector3() const
    {
        return {X, Y, Z};
    }

    float X; // 00
    float Y; // 04
    float Z; // 08
    float W; // 0C
};
RED4EXT_ASSERT_SIZE(Vector4, 0x10);
} // namespace RED4ext
