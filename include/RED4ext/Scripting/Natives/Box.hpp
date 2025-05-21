#pragma once

#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/Quaternion.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector4.hpp>

#include <cstdint>

namespace RED4ext
{
struct __declspec(align(0x10)) Box
{
    static constexpr const char* NAME = "Box";
    static constexpr const char* ALIAS = NAME;

    Box() = default;

    Box(const Vector4& aMin, const Vector4& aMax)
        : Min(aMin)
        , Max(aMax)
    {
    }

    Box(const Vector4& aCenter, float aHalfExtents)
        : Min(aCenter - Vector4(aHalfExtents, aHalfExtents, aHalfExtents, 0))
        , Max(aCenter + Vector4(aHalfExtents, aHalfExtents, aHalfExtents, 0))
    {
    }

    inline Box operator|(const Box& aOther) const
    {
        return {Min.Min(aOther.Min), Max.Max(aOther.Max)};
    }

    inline Box& operator|=(const Box& aOther)
    {
        if (this != &aOther)
        {
            Min = Min.Min(aOther.Min);
            Max = Max.Max(aOther.Max);
        }

        return *this;
    }

    inline Box operator+(const Vector4& aPosition) const
    {
        return {Min + aPosition, Max + aPosition};
    }

    inline Box& operator+=(const Vector4& aPosition)
    {
        Min += aPosition;
        Max += aPosition;

        return *this;
    }

    inline Box operator-(const Vector4& aPosition) const
    {
        return {Min - aPosition, Max - aPosition};
    }

    inline Box& operator-=(const Vector4& aPosition)
    {
        Min -= aPosition;
        Max -= aPosition;

        return *this;
    }

    inline Box operator*(float aScale) const
    {
        return {Min * aScale, Max * aScale};
    }

    inline Box& operator*=(float aScale)
    {
        Min *= aScale;
        Max *= aScale;

        return *this;
    }

    inline Box operator*(const Vector4& aScale) const
    {
        return {Min * aScale, Max * aScale};
    }

    inline Box& operator*=(const Vector4& aScale)
    {
        Min *= aScale;
        Max *= aScale;

        return *this;
    }

    inline Box operator*(const Quaternion& aRotation) const
    {
        const auto rn = aRotation.Normalized();

        const auto xAxis = rn.AxisX();
        const auto yAxis = rn.AxisY();
        const auto zAxis = rn.AxisZ();

        const auto x1 = xAxis * Min.X;
        const auto x2 = xAxis * Max.X;
        const auto y1 = yAxis * Min.Y;
        const auto y2 = yAxis * Max.Y;
        const auto z1 = zAxis * Min.Z;
        const auto z2 = zAxis * Max.Z;

        const auto pMin = x1.Min(x2) + y1.Min(y2) + z1.Min(z2);
        const auto pMax = x1.Max(x2) + y1.Max(y2) + z1.Max(z2);

        return {pMin, pMax};
    }

    inline Box& operator*=(const Quaternion& aRotation)
    {
        *this = *this * aRotation;

        return *this;
    }

    inline bool operator==(const Box& aOther) const
    {
        return Min == aOther.Min && Max == aOther.Max;
    }

    inline bool operator!=(const Box& aOther) const
    {
        return !(*this == aOther);
    }

    inline Vector4 GetCenter() const
    {
        return (Max + Min) * 0.5;
    }

    inline Vector4 GetExtents() const
    {
        return (Max - Min) * 0.5;
    }

    inline Vector4 GetSize() const
    {
        return (Max - Min);
    }

    inline bool IsZeroSize() const
    {
        return Max == Min;
    }

    inline bool IsValid() const
    {
        return Max.X >= Min.X && Max.Y >= Min.Y && Max.Z >= Min.Z;
    }

    Vector4 Min; // 00
    Vector4 Max; // 10
};
RED4EXT_ASSERT_SIZE(Box, 0x20);
} // namespace RED4ext
