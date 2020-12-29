#pragma once

#include <RED4ext/Scripting/IScriptable.hpp>

namespace RED4ext
{
/*
 * I named these classes '*Stack', but this might be wrong.
 *
 * Later down the call chain the game initalize another struct ('CStackFrame') that is passed to scripting functions, it
 * should look like the following:
 *  struct CStackFrame
 *  {
 *      char *code;
 *      int64_t unk8;
 *      int64_t unk10;
 *      int64_t unk18;
 *      int64_t unk20;
 *      int64_t unk28;
 *      int64_t unk30;
 *      int64_t unk38;
 *      IScriptable *scriptable;
 *      int64_t unk48;
 *      int16_t unk50;
 *      int64_t unk58;
 *      int8_t unk60;
 *  };
 *
 * Maybe this should have the name 'CStack', but I am not entierly sure how to call '*Stack', so until a better name is
 * found, the names will be kept as they are now.
 */

struct CStackType
{
    CStackType(IRTTIType* aType, void* aValue)
        : type(aType)
        , value(aValue)
    {
    }

    CStackType()
        : CStackType(nullptr, nullptr)
    {
    }

    IRTTIType* type;
    void* value;
};

struct IStack
{
    virtual ~IStack() = default;
    virtual void* GetResultAddr() { return nullptr; };
    virtual int64_t sub_10() { return 0; };
    virtual void sub_18(int64_t a2) {};
};

RED4EXT_ASSERT_SIZE(IStack, 0x8);

struct CBaseStack : IStack
{
    int64_t unk8;
    int64_t unk10;
    IScriptable* scriptable18;
    IScriptable* scriptable20;
    int64_t unk28;
};

RED4EXT_ASSERT_SIZE(CBaseStack, 0x30);

struct CStack : CBaseStack
{
    CStack(IScriptable* aScriptable = nullptr, CStackType* aArgs = nullptr, uint32_t aArgsCount = 0,
           CStackType* aResult = nullptr, int64_t a6 = 0);
    ~CStack();

    CStackType* args;
    uint32_t argsCount;
    CStackType* result;
};

RED4EXT_ASSERT_SIZE(CStack, 0x48);
RED4EXT_ASSERT_OFFSET(CStack, args, 0x30);
RED4EXT_ASSERT_OFFSET(CStack, argsCount, 0x38);
RED4EXT_ASSERT_OFFSET(CStack, result, 0x40);
} // namespace RED4ext

#ifdef RED4EXT_HEADER_ONLY
#include <RED4ext/Scripting/Stack-inl.hpp>
#endif
