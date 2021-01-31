#pragma once

#include <cstdint>

#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/HashMap.hpp>

namespace RED4ext
{
struct IRTTIType;
struct IScriptable;

struct CBaseEngine
{
    // https://github.com/yamashi/RED4ext/commit/2d30f32826276458f86da8b4c26940924044564d
    struct UnkC0
    {
        uint8_t pad0[0x140];
        uint32_t unk140;
        uint8_t pad144[0x164 - 0x144];
        uint32_t unk164;
        void* hWnd;
        uint8_t pad170[0x9];
        uint8_t isClipped;
    };

    virtual void sub_0() = 0;
    virtual void sub_8() = 0;
    virtual void sub_10() = 0;
    virtual ~CBaseEngine() = 0;
    virtual void sub_18() = 0;
    virtual void sub_28() = 0;
    virtual void sub_30() = 0;
    virtual void sub_38() = 0;
    virtual void sub_40() = 0;
    virtual void sub_48() = 0;
    virtual void sub_50() = 0;
    virtual void sub_58() = 0;
    virtual void sub_60() = 0;
    virtual void sub_68() = 0;
    virtual void sub_70() = 0;
    virtual void sub_78() = 0;
    virtual void sub_80() = 0;
    virtual void sub_88() = 0;
    virtual void sub_90() = 0;
    virtual void sub_98() = 0;
    virtual void sub_A0() = 0;
    virtual void sub_A8() = 0;
    virtual void sub_B0() = 0;
    virtual void sub_B8() = 0;
    virtual void sub_C0() = 0;
    virtual void sub_C8() = 0;
    virtual void sub_D0() = 0;
    virtual void sub_D8() = 0;
    virtual void sub_E0() = 0;
    virtual void sub_E8() = 0;
    virtual void sub_F0() = 0;
    virtual void sub_F8() = 0;
    virtual void sub_100() = 0;

    int8_t unk8[0xB8];
    UnkC0* unkC0;
    int8_t unkC8[0x158];
};
RED4EXT_ASSERT_SIZE(CBaseEngine, 0x220);
RED4EXT_ASSERT_OFFSET(CBaseEngine, unkC0, 0xC0);

struct BaseGameEngine : CBaseEngine
{
    int8_t unk220[0x18];
};
RED4EXT_ASSERT_SIZE(BaseGameEngine, 0x238);
RED4EXT_ASSERT_OFFSET(BaseGameEngine, unk220, 0x220);

struct GameInstance
{
    virtual ~GameInstance() = 0;
    virtual IScriptable* GetInstance(const IRTTIType* type) = 0;
    virtual void Unk_10() = 0;
    virtual void Unk_18() = 0;
    virtual void Unk_20() = 0;
    virtual void Unk_28() = 0;
    virtual void Unk_30() = 0;
    virtual void Unk_38() = 0;
    virtual void Unk_40() = 0;
    virtual void Unk_48() = 0;
    virtual void Unk_50() = 0;
    virtual void Unk_58() = 0;
    virtual void Unk_60() = 0;
    virtual void Unk_68() = 0;

    HashMap<IRTTIType*, Handle<IScriptable>> unk08; // 08
    DynArray<Handle<IScriptable>> unk38;            // 38
    HashMap<uintptr_t, void*> unk40;                // 40
    uintptr_t unk78[(0x138 - 0x78) >> 3];           // 78
};
RED4EXT_ASSERT_SIZE(GameInstance, 0x138);

struct CGameEngine : BaseGameEngine
{
    struct CGameFramework
    {
        int8_t unk0[0x10];
        GameInstance* gameInstance;
    };

    static CGameEngine* Get();

    int8_t unk238[0x28];
    CGameFramework* framework;
    int8_t unk268[0x30];
};
RED4EXT_ASSERT_SIZE(CGameEngine, 0x298);
RED4EXT_ASSERT_OFFSET(CGameEngine, unk238, 0x238);
RED4EXT_ASSERT_OFFSET(CGameEngine, framework, 0x260);
} // namespace RED4ext

#ifdef RED4EXT_HEADER_ONLY
#include <RED4ext/GameEngine-inl.hpp>
#endif
