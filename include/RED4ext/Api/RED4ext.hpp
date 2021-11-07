#pragma once

#include <RED4ext/Api/v0/RED4ext.hpp>

namespace RED4ext
{
/**
 * @brief The latest RED4ext.
 */
using RED4ext = v0::RED4ext;

/**
 * @brief The latest hooking.
 */
using Hooking = v0::Hooking;
} // namespace RED4ext

#ifndef RED4EXT_OFFSET_TO_ADDR
#define RED4EXT_OFFSET_TO_ADDR(offset)                                                                                 \
    reinterpret_cast<void*>(reinterpret_cast<uintptr_t>(GetModuleHandle(nullptr)) + offset)
#endif
