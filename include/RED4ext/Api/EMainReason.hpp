#pragma once

#include <cstdint>

namespace RED4ext
{
enum class EMainReason : uint8_t
{
    Load = 0,
    Unload
};
} // namespace RED4ext
