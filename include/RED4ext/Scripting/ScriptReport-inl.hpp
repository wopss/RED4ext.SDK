#pragma once

#ifdef RED4EXT_STATIC_LIB
#include <RED4ext/Scripting/ScriptReport.hpp>
#endif

#include <RED4ext/RTTITypes.hpp>

RED4EXT_INLINE RED4ext::ScriptReport::ScriptReport() noexcept
    : errors(&unk10)
    , maxErrors(0)
    , fillErrors(true)
{
}

RED4EXT_INLINE RED4ext::ScriptReport::ScriptReport(RED4ext::DynArray<RED4ext::CString>& aErrors,
                                                   uint32_t aMaxErrors) noexcept
    : errors(&aErrors)
    , maxErrors(aMaxErrors)
    , fillErrors(true)
{
}

RED4EXT_INLINE void RED4ext::ScriptReport::AddValidationError(const char* aFormat, ...)
{
    if (errors && fillErrors)
    {
        std::va_list args;
        va_start(args, aFormat);
        errors->PushBack(Format(aFormat, args));
        va_end(args);
    }
}

RED4EXT_INLINE void RED4ext::ScriptReport::AddBindingError(const char* aFormat, ...)
{
    if (errors && fillErrors)
    {
        std::va_list args;
        va_start(args, aFormat);
        errors->PushBack(Format(aFormat, args));
        va_end(args);
    }
}

RED4EXT_INLINE bool RED4ext::ScriptReport::HasErrors() const noexcept
{
    return errors && errors->size > 0;
}

RED4EXT_INLINE RED4ext::CString RED4ext::ScriptReport::ToString() const noexcept
{
    if (!errors || errors->size == 0)
    {
        return {};
    }

    std::string str;
    bool eol = false;

    for (const auto& error : *errors)
    {
        if (eol)
        {
            str.append("\n");
        }

        str.append(error.c_str());
        eol = true;
    }

    return str.c_str();
}

RED4EXT_INLINE RED4ext::CString RED4ext::ScriptReport::Format(const char* aFormat, std::va_list aArgs)
{
    char buffer[4096];
    vsnprintf(buffer, sizeof(buffer), aFormat, aArgs);
    return buffer;
}
