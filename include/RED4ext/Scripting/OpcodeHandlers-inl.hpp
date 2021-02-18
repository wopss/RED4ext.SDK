#pragma once

#ifdef RED4EXT_STATIC_LIB
#include <RED4ext/Scripting/OpcodeHandlers.hpp>
#endif

#include <RED4ext/Addresses.hpp>

RED4EXT_INLINE RED4ext::OpcodeHandlers::Handler_t RED4ext::OpcodeHandlers::Get(uint8_t aOpcode)
{
    static uint8_t* pLocation = reinterpret_cast<uint8_t*>(Addresses::OpcodeHandlers_Get) + 3 + reinterpret_cast<uintptr_t>(GetModuleHandleA(nullptr));
    static uintptr_t finalLocation = reinterpret_cast<uintptr_t>(pLocation) + 4 + *reinterpret_cast<uint32_t*>(pLocation);
    static auto* s_opcodes = reinterpret_cast<Handler_t*>(finalLocation);

    return s_opcodes[aOpcode];
}

RED4EXT_INLINE void RED4ext::OpcodeHandlers::Run(uint8_t aOpcode, RED4ext::IScriptable* aScriptable,
                                                RED4ext::CStackFrame* aFrame, void* aReturn, void* a4)
{
    Get(aOpcode)(aScriptable, aFrame, aReturn, a4);
}
