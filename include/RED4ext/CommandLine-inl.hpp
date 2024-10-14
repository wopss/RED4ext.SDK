#pragma once

#ifdef RED4EXT_STATIC_LIB
#include <RED4ext/CommandLine.hpp>
#endif

#include <RED4ext/Detail/AddressHashes.hpp>
#include <RED4ext/Relocation.hpp>
#include <RED4ext/StringView.hpp>

RED4EXT_INLINE RED4ext::CommandLine* RED4ext::CommandLine::Get() noexcept
{
    // NOTE: GetAddr is actually necessary here

    static CommandLine* ptr{
        RED4ext::UniversalRelocPtr<RED4ext::CommandLine>(RED4ext::Detail::AddressHashes::CommandLine).GetAddr()};
    return ptr;
}

RED4EXT_INLINE bool RED4ext::CommandLine::HasLaunchParameter(const RED4ext::StringView& aParam) noexcept
{
    using func_t = bool (*)(RED4ext::CommandLine*, const StringView&, std::uint32_t*, std::uint64_t**);

    static const func_t func{
        RED4ext::UniversalRelocFunc<func_t>(RED4ext::Detail::AddressHashes::CommandLine_HasLaunchParameter)};

    std::uint32_t optionIndex{};
    std::uint64_t* unkPtr{};

    return func(this, aParam, &optionIndex, &unkPtr);
}
