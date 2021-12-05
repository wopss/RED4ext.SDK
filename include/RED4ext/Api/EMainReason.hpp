#pragma once

#include <cstdint>

namespace RED4ext
{
/**
 * @brief The reason plugin's main function is called.
 */
enum class EMainReason : uint8_t
{
    Load = 0,
    Unload
};
} // namespace RED4ext
