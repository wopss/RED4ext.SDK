#pragma once

#include <RED4ext/Common.hpp>

namespace RED4ext
{

struct StringView;

class CommandLine
{
    static CommandLine* Get() noexcept;
    bool HasLaunchParameter(StringView aParam) noexcept;
};
} // namespace RED4ext

#ifdef RED4EXT_HEADER_ONLY
#include <RED4ext/CommandLine-inl.hpp>
#endif
