#pragma once

#include <vector>
#include <RED4ext/Types/InstanceType.hpp>

namespace RED4ext
{
/*
 * I named these classes '*Stack', but this might be wrong.
 *
 * Later down the call chain the game initalize another struct ('CStackFrame') that is passed to scripting functions, it
 * should look like CStackFrame.
 *
 * Maybe this should have the name 'CStack', but I am not entirely sure how to call '*Stack', so until a better name is
 * found, the names will be kept as they are now.
 */
struct IRTTIType;
struct IScriptable;

struct CStackType
{
    CStackType(IRTTIType* aType = nullptr, ScriptInstance aValue = nullptr);

    IRTTIType* type;      // 00
    ScriptInstance value; // 08
};
RED4EXT_ASSERT_SIZE(CStackType, 0x10);

using StackArgs_t = std::vector<CStackType>;

struct IStack
{
    // clang-format off
    virtual ~IStack() = default;                        // 00
    virtual void* GetResultAddr() { return nullptr; };  // 08
    virtual IRTTIType* GetType() { return nullptr; };   // 10
    virtual void sub_18(int64_t a2){};                  // 18
    // clang-format on
};
RED4EXT_ASSERT_SIZE(IStack, 0x8);

struct CBaseStack : IStack
{
    int64_t unk08;            // 08
    int64_t unk10;            // 10
    ScriptInstance context18; // 18
    ScriptInstance context20; // 20
    int64_t unk28;            // 28
};

RED4EXT_ASSERT_SIZE(CBaseStack, 0x30);

struct CStack : CBaseStack
{
    CStack(ScriptInstance aContext = nullptr, CStackType* aArgs = nullptr, uint32_t aArgsCount = 0,
           CStackType* aResult = nullptr, int64_t a6 = 0);
    ~CStack() = default;

    CStackType* args;   // 30
    uint32_t argsCount; // 38
    CStackType* result; // 40
};

RED4EXT_ASSERT_SIZE(CStack, 0x48);
RED4EXT_ASSERT_OFFSET(CStack, args, 0x30);
RED4EXT_ASSERT_OFFSET(CStack, argsCount, 0x38);
RED4EXT_ASSERT_OFFSET(CStack, result, 0x40);

struct CScriptStack : CBaseStack
{
    ~CScriptStack() override = default;

    uint8_t* args;          // 30
    ScriptInstance value;   // 38
    IRTTIType* type;        // 40
};

RED4EXT_ASSERT_SIZE(CScriptStack, 0x48);
RED4EXT_ASSERT_OFFSET(CScriptStack, args, 0x30);
RED4EXT_ASSERT_OFFSET(CScriptStack, value, 0x38);
RED4EXT_ASSERT_OFFSET(CScriptStack, type, 0x40);

struct CStackFrame
{
    char* code;           // 00
    int64_t unk8;         // 08
    int64_t unk10;        // 10
    int64_t unk18;        // 18
    int64_t unk20;        // 20
    int64_t unk28;        // 28
    int64_t unk30;        // 30
    int64_t unk38;        // 38
    IScriptable* context; // 40
    int64_t unk48;        // 48
    int16_t unk50;        // 50
    int64_t unk58;        // 58
    int8_t unk60;         // 60
};
RED4EXT_ASSERT_SIZE(CStackFrame, 0x68);
} // namespace RED4ext

#ifdef RED4EXT_HEADER_ONLY
#include <RED4ext/Scripting/Stack-inl.hpp>
#endif
