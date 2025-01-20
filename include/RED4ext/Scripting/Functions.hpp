#pragma once

#include <RED4ext/CName.hpp>
#include <RED4ext/CNamePool.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/HashMap.hpp>
#include <RED4ext/InstanceType.hpp>
#include <RED4ext/Memory/Allocators.hpp>
#include <RED4ext/Scripting/Script.hpp>

namespace RED4ext
{
struct CClass;
struct CStack;
struct CStackFrame;
struct CProperty;
struct PoolRTTIFunctionAllocator;
struct IScriptable;
struct CBaseRTTIType;

struct IFunction
{
    struct Invokable
    {
        virtual void sub_0() = 0;
        virtual void sub_8() = 0;
        virtual void Execute(ScriptInstance aInstance, CStackFrame& aFrame, void* aResult,
                             const CBaseRTTIType* aResultType) = 0;
    };

    virtual Memory::IAllocator* GetAllocator() = 0; // 00
    virtual ~IFunction() = 0;                       // 08
    virtual CClass* GetParent() = 0;                // 10
    virtual uint32_t GetRegIndex() = 0;             // 18
    virtual Invokable* GetInvokable() = 0; // 20 - Returns an object, vf obj+0x20 is the function to invoke only used
                                           // if static func
};
RED4EXT_ASSERT_SIZE(IFunction, 0x8);

template<typename T>
using ScriptingFunction_t = void (*)(IScriptable*, CStackFrame*, T, int64_t);

struct CBaseFunction : IFunction
{
    struct Flags
    {
        uint32_t isNative : 1;         // 00
        uint32_t isStatic : 1;         // 01
        uint32_t isFinal : 1;          // 02
        uint32_t isEvent : 1;          // 03
        uint32_t isExec : 1;           // 04
        uint32_t hasUndefinedBody : 1; // 05 Unused
        uint32_t isTimer : 1;          // 06 Unused
        uint32_t isPrivate : 1;        // 07
        uint32_t isProtected : 1;      // 08
        uint32_t isPublic : 1;         // 09
        uint32_t b10 : 1;              // 0A
        uint32_t b11 : 1;              // 0B
        uint32_t b12 : 1;              // 0C
        uint32_t isConst : 1;          // 0D
        uint32_t isQuest : 1;          // 0E
        uint32_t isThreadsafe : 1;     // 0F
        uint32_t b16 : 16;             // 10
    };
    RED4EXT_ASSERT_SIZE(CBaseFunction::Flags, 0x4);

    bool Execute(CStack* aStack);

    /*
     * The following two functions might not be needed when scripts are released, I am not sure if they set the type of
     * the function and the parameters if it is imported in scripts or at runtime, but I doubt it is at runtime when the
     * function is created. The game is releasing memory for "returnType", "params" and "localVars" when it tries to
     * create a function read from "finalscripts", so I assume that defined functions in scripts take priority over
     * manually set return type, params and local variables.
     */
    bool SetReturnType(CName aType);
    bool AddParam(CName aType, const char* aName, bool aIsOut = false, bool aIsOptional = false);

    CName fullName;                 // 08
    CName shortName;                // 10
    CProperty* returnType;          // 18
    int64_t unk20;                  // 20
    DynArray<CProperty*> params;    // 28
    DynArray<CProperty*> localVars; // 38
    HashMap<uint64_t, void*> unk48; // 48
    CCompiledCode bytecode;         // 78
    Flags flags;                    // A8
    int32_t unkAC;                  // AC

private:
    using Handler_t = void (*)(ScriptInstance, RED4ext::CStackFrame&, void*, CBaseRTTIType*);

    bool Execute_(CStack* aStack);
    static Handler_t GetHandler(uint32_t aIndex);
    bool ExecuteNative(CStack* aStack, CStackFrame& aFrame);
};
RED4EXT_ASSERT_SIZE(CBaseFunction, 0xB0);
RED4EXT_ASSERT_OFFSET(CBaseFunction, fullName, 0x08);
RED4EXT_ASSERT_OFFSET(CBaseFunction, bytecode, 0x78);
RED4EXT_ASSERT_OFFSET(CBaseFunction, flags, 0xA8);

struct CGlobalFunction : CBaseFunction
{
    template<typename T>
    static CGlobalFunction* Create(const char* aFullName, const char* aShortName, ScriptingFunction_t<T> aFunc)
    {
        Memory::RTTIFunctionAllocator allocator;
        auto memory = allocator.Alloc<CGlobalFunction>();
        if (memory)
        {
            auto fullName = CNamePool::Add(aFullName);
            auto shortName = CNamePool::Add(aShortName);

            using func_t = CGlobalFunction* (*)(CGlobalFunction*, CName, CName, ScriptingFunction_t<T>);
            static UniversalRelocFunc<func_t> func(Detail::AddressHashes::CGlobalFunction_ctor);
            func(memory, fullName, shortName, aFunc);
        }

        return memory;
    }

    uint32_t regIndex; // B0
};
RED4EXT_ASSERT_SIZE(CGlobalFunction, 0xB8);
RED4EXT_ASSERT_OFFSET(CGlobalFunction, regIndex, 0xB0);

struct CClassFunction : CBaseFunction
{
    template<typename T>
    static CClassFunction* Create(CClass* aParent, const char* aFullName, const char* aShortName,
                                  ScriptingFunction_t<T> aFunc, Flags aFlags = {})
    {
        Memory::RTTIFunctionAllocator allocator;
        auto memory = allocator.Alloc<CClassFunction>();
        if (memory)
        {
            auto fullName = CNamePool::Add(aFullName);
            auto shortName = CNamePool::Add(aShortName);

            using func_t = CClassFunction* (*)(CClassFunction*, CClass*, CName, CName, ScriptingFunction_t<T>, Flags);
            static UniversalRelocFunc<func_t> func(Detail::AddressHashes::CClassFunction_ctor);
            func(memory, aParent, fullName, shortName, aFunc, aFlags);
        }

        return memory;
    }

    CClass* parent;    // B0
    uint32_t regIndex; // B8
};
RED4EXT_ASSERT_SIZE(CClassFunction, 0xC0);
RED4EXT_ASSERT_OFFSET(CClassFunction, parent, 0xB0);
RED4EXT_ASSERT_OFFSET(CClassFunction, regIndex, 0xB8);

struct CClassStaticFunction : CClassFunction
{
    template<typename T>
    static CClassStaticFunction* Create(CClass* aParent, const char* aFullName, const char* aShortName,
                                        ScriptingFunction_t<T> aFunc, Flags aFlags = {})
    {
        Memory::RTTIFunctionAllocator allocator;
        auto memory = allocator.Alloc<CClassStaticFunction>();
        if (memory)
        {
            auto fullName = CNamePool::Add(aFullName);
            auto shortName = CNamePool::Add(aShortName);

            using func_t =
                CClassStaticFunction* (*)(CClassStaticFunction*, CClass*, CName, CName, ScriptingFunction_t<T>, Flags);
            static UniversalRelocFunc<func_t> func(Detail::AddressHashes::CClassStaticFunction_ctor);
            func(memory, aParent, fullName, shortName, aFunc, aFlags);
        }

        return memory;
    }
};
RED4EXT_ASSERT_SIZE(CClassStaticFunction, 0xC0);

struct CScriptedFunction : CBaseFunction
{
    CClass* parent; // B0
};
RED4EXT_ASSERT_SIZE(CScriptedFunction, 0xB8);
RED4EXT_ASSERT_OFFSET(CScriptedFunction, parent, 0xB0);
} // namespace RED4ext

#ifdef RED4EXT_HEADER_ONLY
#include <RED4ext/Scripting/Functions-inl.hpp>
#endif
