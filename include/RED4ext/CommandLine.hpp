#pragma once

#include <RED4ext/Common.hpp>

namespace RED4ext
{

struct StringView;

class CommandLine
{
public:
    CommandLine() = delete;
    CommandLine(const CommandLine&) = delete;
    CommandLine(CommandLine&&) = delete;
    CommandLine& operator=(const CommandLine&) = delete;
    CommandLine& operator=(CommandLine&&) = delete;

    static CommandLine* Get() noexcept;
    bool HasLaunchParameter(StringView aParam) noexcept;
};
} // namespace RED4ext

#ifdef RED4EXT_HEADER_ONLY
#include <RED4ext/CommandLine-inl.hpp>
#endif
