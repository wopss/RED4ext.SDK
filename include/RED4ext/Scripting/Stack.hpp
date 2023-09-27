#pragma once

#include <vector>

#include <RED4ext/InstanceType.hpp>
#include <RED4ext/Scripting/Functions.hpp>

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
struct CBaseRTTIType;
struct CClass;
struct IScriptable;

struct CStackType
{
    CStackType(CBaseRTTIType* aType = nullptr, ScriptInstance aValue = nullptr);

    CBaseRTTIType* type;  // 00
    ScriptInstance value; // 08
};
RED4EXT_ASSERT_SIZE(CStackType, 0x10);

using StackArgs_t = std::vector<CStackType>;

struct IStack
{
    virtual ~IStack() = default; // 00

    virtual void* GetResultAddr() // 08
    {
        return nullptr;
    }

    virtual CBaseRTTIType* GetResultType() // 10
    {
        return nullptr;
    }

    virtual void sub_18(int64_t a2) // 18
    {
        RED4EXT_UNUSED_PARAMETER(a2);
    }
};
RED4EXT_ASSERT_SIZE(IStack, 0x8);

struct CBaseStack : IStack
{
    virtual void sub_20() // 20
    {
    }

    virtual void GenerateCode(char* aCode) // 28
    {
        RED4EXT_UNUSED_PARAMETER(aCode);
    }

    RED4ext::IScriptable* GetContext() const;

    int64_t unk08;          // 08
    void* unk10;            // 10
    IScriptable* context18; // 18
    IScriptable* context20; // 20
    CClass* unk28;          // 28

protected:
    CBaseStack(IScriptable* aContext) noexcept;
};

RED4EXT_ASSERT_SIZE(CBaseStack, 0x30);

struct CStack : CBaseStack
{
    CStack(ScriptInstance aContext = nullptr, CStackType* aArgs = nullptr, uint32_t aArgsCount = 0,
           CStackType* aResult = nullptr);
    ~CStack() = default;

    CStackType* args;   // 30
    uint32_t argsCount; // 38
    CStackType* result; // 40
    uint8_t pad48[0x10];
};

RED4EXT_ASSERT_SIZE(CStack, 0x58);
RED4EXT_ASSERT_OFFSET(CStack, args, 0x30);
RED4EXT_ASSERT_OFFSET(CStack, argsCount, 0x38);
RED4EXT_ASSERT_OFFSET(CStack, result, 0x40);

struct CScriptStack : CBaseStack
{
    ~CScriptStack() override = default;

    uint8_t* args;        // 30
    ScriptInstance value; // 38
    CBaseRTTIType* type;  // 40
};

RED4EXT_ASSERT_SIZE(CScriptStack, 0x48);
RED4EXT_ASSERT_OFFSET(CScriptStack, args, 0x30);
RED4EXT_ASSERT_OFFSET(CScriptStack, value, 0x38);
RED4EXT_ASSERT_OFFSET(CScriptStack, type, 0x40);

struct CStackFrame
{
    CStackFrame(IScriptable* aContext, char* aCode, void* aUnk = nullptr);

    char* code;              // 00
    CBaseFunction* func;     // 08 - For scripted functions
    void* localVars;         // 10 - For scripted functions
    void* params;            // 18 - For scripted functions
    int64_t unk20;           // 20
    int64_t unk28;           // 28
    void* data;              // 30 - The result of the opcode, points to the original instance (local, param, etc.)
    CBaseRTTIType* dataType; // 38 - The type of the result
    IScriptable* context;    // 40
    CStackFrame* parent;     // 48
    int16_t unk50;           // 50
    int64_t unk58;           // 58
    uint16_t paramFlags;     // 60
    uint8_t currentParam;    // 62
    bool useDirectData;      // 63 - If set the result param is not used, preventing an extra copy of the result

    void Step()
    {
        this->code++;
    }

    bool IsCurrentParamSet() const
    {
        return (paramFlags & (1 << currentParam)) != 0;
    }
};
RED4EXT_ASSERT_SIZE(CStackFrame, 0x68);
} // namespace RED4ext

#ifdef RED4EXT_HEADER_ONLY
#include <RED4ext/Scripting/Stack-inl.hpp>
#endif
