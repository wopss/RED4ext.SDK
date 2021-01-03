#pragma once

#include <cstdint>

namespace RED4ext
{
enum class ClassFlags : uint32_t
{
    None = 0,
    IsAbstract = 1 << 0,
    IsNative = 1 << 1,
    Unk2 = 1 << 2,
    Unk3 = 1 << 3,
    IsStruct = 1 << 4,
    Unk5 = 1 << 5,
    IsImportOnly = 1 << 6,
    IsPrivate = 1 << 7,
    IsProtected = 1 << 8,
    IsTestOnly = 1 << 9,
};
} // namespace RED4ext
