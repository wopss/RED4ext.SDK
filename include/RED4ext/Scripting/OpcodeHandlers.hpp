#pragma once

#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Stack.hpp>
#include <RED4ext/Types/InstanceType.hpp>

namespace RED4ext
{
struct OpcodeHandlers
{
    using Handler_t = void (*)(RED4ext::IScriptable*, RED4ext::CStackFrame*, void*, void*);

    static Handler_t Get(uint8_t aOpcode);
    static void Run(uint8_t aOpcode, RED4ext::IScriptable*, RED4ext::CStackFrame*, void*, void*);
};
} // namespace RED4ext

#ifdef RED4EXT_HEADER_ONLY
#include <RED4ext/Scripting/OpcodeHandlers-inl.hpp>
#endif
