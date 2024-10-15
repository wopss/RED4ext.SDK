#pragma once

#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/HashMap.hpp>

namespace RED4ext
{
struct CString;

class CommandLine
{
public:
    static const CommandLine* Get() noexcept;
    bool HasLaunchParameter(const RED4ext::CString& aParam) const noexcept;

    RED4ext::HashMap<RED4ext::CString, RED4ext::DynArray<RED4ext::CString>> m_parameterMap;
};
} // namespace RED4ext

#ifdef RED4EXT_HEADER_ONLY
#include <RED4ext/CommandLine-inl.hpp>
#endif
