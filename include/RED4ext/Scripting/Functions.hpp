#pragma once

#include <RED4ext/CName.hpp>
#include <RED4ext/CNamePool.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/MemoryAllocators.hpp>

namespace RED4ext
{
struct CClass;
struct CStack;
struct CStackFrame;
struct CProperty;
struct IMemoryAllocator;
struct PoolRTTIFunctionAllocator;
struct IScriptable;

struct IFunction
{
    virtual IMemoryAllocator* GetAllocator() = 0; // 00
    virtual ~IFunction() = 0;                     // 08
    virtual CClass* GetParent() = 0;              // 10
    virtual uint32_t GetRegIndex() = 0;           // 18
    virtual void sub_20() = 0; // 20 - Returns an object, vf obj+0x20 is the function to invoke only used if static func
};
RED4EXT_ASSERT_SIZE(IFunction, 0x8);

template<typename T>
using ScriptingFunction_t = void (*)(IScriptable*, CStackFrame*, T, int64_t);

struct CBaseFunction : IFunction
{
    struct Flags
    {
        uint32_t isNative : 1; // 01
        uint32_t isStatic : 1; // 02
        uint32_t b2 : 30;
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
    int8_t unk48[0x30];             // 48
    Flags flags;                    // 78
    uint32_t unk7C;                 // 7C
};
RED4EXT_ASSERT_SIZE(CBaseFunction, 0x80);

RED4EXT_ASSERT_OFFSET(CBaseFunction, fullName, 0x8);
RED4EXT_ASSERT_OFFSET(CBaseFunction, flags, 0x78);

struct CGlobalFunction : CBaseFunction
{
    template<typename T>
    static CGlobalFunction* Create(const char* aFullName, const char* aShortName, ScriptingFunction_t<T> aFunc)
    {
        auto allocator = RTTIFunctionAllocator::Get();
        auto memory = allocator->Alloc<CGlobalFunction>();
        if (memory)
        {
            auto fullName = CNamePool::Add(aFullName);
            auto shortName = CNamePool::Add(aShortName);

            using func_t = CGlobalFunction* (*)(CGlobalFunction*, CName, CName, ScriptingFunction_t<T>);
            static REDfunc<func_t> func(Addresses::CGlobalFunction_ctor);
            func(memory, fullName, shortName, aFunc);
        }

        return memory;
    }

    uint32_t index; // 80 - The registration index.
};
RED4EXT_ASSERT_SIZE(CGlobalFunction, 0x88);
RED4EXT_ASSERT_OFFSET(CGlobalFunction, index, 0x80);

struct CClassFunction : CBaseFunction
{
    template<typename T>
    static CClassFunction* Create(CClass* aParent, const char* aFullName, const char* aShortName,
                                  ScriptingFunction_t<T> aFunc, Flags aFlags = {})
    {
        auto allocator = RTTIFunctionAllocator::Get();
        auto memory = allocator->Alloc<CClassFunction>();
        if (memory)
        {
            auto fullName = CNamePool::Add(aFullName);
            auto shortName = CNamePool::Add(aShortName);

            using func_t = CClassFunction* (*)(CClassFunction*, CClass*, CName, CName, ScriptingFunction_t<T>, Flags);
            static REDfunc<func_t> func(Addresses::CClassFunction_ctor);
            func(memory, aParent, fullName, shortName, aFunc, aFlags);
        }

        return memory;
    }

    CClass* parent; // 80
    uint32_t index; // 88 - The registration index.
};
RED4EXT_ASSERT_SIZE(CClassFunction, 0x90);
RED4EXT_ASSERT_OFFSET(CClassFunction, parent, 0x80);
RED4EXT_ASSERT_OFFSET(CClassFunction, index, 0x88);

struct CClassStaticFunction : CClassFunction
{
    template<typename T>
    static CClassStaticFunction* Create(CClass* aParent, const char* aFullName, const char* aShortName,
                                        ScriptingFunction_t<T> aFunc, Flags aFlags = {})
    {
        auto allocator = RTTIFunctionAllocator::Get();
        auto memory = allocator->Alloc<CClassStaticFunction>();
        if (memory)
        {
            auto fullName = CNamePool::Add(aFullName);
            auto shortName = CNamePool::Add(aShortName);

            using func_t =
                CClassStaticFunction* (*)(CClassStaticFunction*, CClass*, CName, CName, ScriptingFunction_t<T>, Flags);
            static REDfunc<func_t> func(Addresses::CClassStaticFunction_ctor);
            func(memory, aParent, fullName, shortName, aFunc, aFlags);
        }

        return memory;
    }
};
RED4EXT_ASSERT_SIZE(CClassFunction, 0x90);
RED4EXT_ASSERT_OFFSET(CClassFunction, parent, 0x80);
RED4EXT_ASSERT_OFFSET(CClassFunction, index, 0x88);

struct CScriptedFunction : CBaseFunction
{
    CClass* parent; // 80
};
RED4EXT_ASSERT_SIZE(CScriptedFunction, 0x88);
RED4EXT_ASSERT_OFFSET(CScriptedFunction, parent, 0x80);
} // namespace RED4ext

#ifdef RED4EXT_HEADER_ONLY
#include <RED4ext/Scripting/Functions-inl.hpp>
#endif
