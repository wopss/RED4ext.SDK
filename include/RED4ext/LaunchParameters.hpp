#pragma once

#include <RED4ext/CString.hpp>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/HashMap.hpp>

namespace RED4ext
{
/**
 * @brief Gets the command line arguments the game has been launched with.
 *
 * Format is: key = [value1, value2, ...]
 *
 * @return A const reference to a hash map of the game's launch parameters.
 */
const HashMap<CString, DynArray<CString>>& GetLaunchParameters() noexcept;
} // namespace RED4ext

#ifdef RED4EXT_HEADER_ONLY
#include <RED4ext/LaunchParameters-inl.hpp>
#endif
