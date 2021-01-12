#pragma once

#include <RED4ext/DynArray.hpp>
#include <RED4ext/IMemoryAllocator.hpp>
#include <RED4ext/Scripting/CProperty.hpp>

namespace RED4ext
{
struct CClass;
struct CStack;

struct IFunction
{
    virtual IMemoryAllocator* GetAllocator() = 0;
    virtual ~IFunction() = 0;

    virtual CClass* GetParent() = 0;
    virtual uint32_t GetFuncIndex() = 0;
    virtual void sub_20() = 0; // Returns an object, vf obj+0x20 is the function to invoke only used if static func
};
RED4EXT_ASSERT_SIZE(IFunction, 0x8);

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

    CName fullName;
    CName shortName;
    CProperty* returnType;
    int64_t unk20;
    DynArray<CProperty*> params;
    DynArray<CProperty*> localVars;
    int8_t unk48[0x30];
    Flags flags;
    uint32_t unk7C;
};
RED4EXT_ASSERT_SIZE(CBaseFunction, 0x80);

RED4EXT_ASSERT_OFFSET(CBaseFunction, fullName, 0x8);
RED4EXT_ASSERT_OFFSET(CBaseFunction, flags, 0x78);

struct CGlobalFunction : CBaseFunction
{
    uint32_t index; // The registration index.
};
RED4EXT_ASSERT_SIZE(CGlobalFunction, 0x88);
RED4EXT_ASSERT_OFFSET(CGlobalFunction, index, 0x80);

struct CClassFunction : CBaseFunction
{
    CClass* parent;
    uint32_t index; // The registration index.
};
RED4EXT_ASSERT_SIZE(CClassFunction, 0x90);
RED4EXT_ASSERT_OFFSET(CClassFunction, parent, 0x80);
RED4EXT_ASSERT_OFFSET(CClassFunction, index, 0x88);

struct CScriptedFunction : CBaseFunction
{
    CClass* parent;
};
RED4EXT_ASSERT_SIZE(CScriptedFunction, 0x88);
RED4EXT_ASSERT_OFFSET(CScriptedFunction, parent, 0x80);
} // namespace RED4ext

#ifdef RED4EXT_HEADER_ONLY
#include <RED4ext/Scripting/Functions-inl.hpp>
#endif
