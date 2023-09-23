#pragma once

#ifdef RED4EXT_STATIC_LIB
#include <RED4ext/Scripting/OpcodeHandlers.hpp>
#endif

#include <RED4ext/Addresses.hpp>
#include <RED4ext/Relocation.hpp>

RED4EXT_INLINE RED4ext::OpcodeHandlers::Handler_t RED4ext::OpcodeHandlers::Get(uint8_t aOpcode)
{
    RelocPtr<Handler_t*> opcodes(Addresses::OpcodeHandlers);
    return opcodes[aOpcode];
}

RED4EXT_INLINE void RED4ext::OpcodeHandlers::Run(uint8_t aOpcode, RED4ext::IScriptable* aScriptable,
                                                 RED4ext::CStackFrame* aFrame, void* aReturn, void* a4)
{
    Get(aOpcode)(aScriptable, aFrame, aReturn, a4);
}
