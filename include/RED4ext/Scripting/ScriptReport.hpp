#pragma once

#include <RED4ext/CString.hpp>
#include <RED4ext/DynArray.hpp>
#include <cstdarg>

namespace RED4ext
{
struct ScriptReport
{
    ScriptReport() noexcept;

    ScriptReport(DynArray<CString>& aErrors, uint32_t aMaxErrors = 0) noexcept;

    virtual ~ScriptReport() = default;

    virtual void AddValidationError(const char* aFormat, ...);

    virtual void AddBindingError(const char* aFormat, ...);

    [[nodiscard]] bool HasErrors() const noexcept;

    [[nodiscard]] CString ToString() const noexcept;

    static CString Format(const char* aFormat, std::va_list aArgs);

    bool fillErrors;           // 08 - Usually equals to CBaseEngine::scriptsSilentValidation
    DynArray<CString> unk10;   // 10 - Seems to be unused by the game
    DynArray<CString>* errors; // 20 - Usually points to CBaseEngine::scriptsValidationErrors
    uint32_t maxErrors;        // 28
};
RED4EXT_ASSERT_SIZE(ScriptReport, 0x30);
RED4EXT_ASSERT_OFFSET(ScriptReport, fillErrors, 0x08);
RED4EXT_ASSERT_OFFSET(ScriptReport, errors, 0x20);
RED4EXT_ASSERT_OFFSET(ScriptReport, maxErrors, 0x28);
} // namespace RED4ext
