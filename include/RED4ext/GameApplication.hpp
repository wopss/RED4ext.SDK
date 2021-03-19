#pragma once

#include <cstdint>

#include <RED4ext/CString.hpp>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/GameStates.hpp>

namespace RED4ext
{
enum class EGameStateStatus
{
    Uninitialized = 0,
    Initialized,
    Ran,
    Done,
};

struct CBaseGameApplication
{
    virtual void sub_0() = 0;
    virtual void sub_8() = 0;
    virtual void sub_10() = 0;
    virtual void sub_18() = 0;
    virtual void sub_20() = 0;
    virtual void sub_28() = 0;
    virtual void sub_30() = 0;
    virtual void sub_38() = 0;
    virtual void sub_40() = 0;
    virtual void sub_48() = 0;
    virtual void sub_50() = 0;
    virtual void sub_58() = 0;
    virtual void sub_60() = 0;

    int64_t unk8;
    int64_t unk10;
    int64_t unk18;
    int64_t unk20;
    CString enginePath;
    CString r6Path;
    CString editorPath;
};
RED4EXT_ASSERT_SIZE(CBaseGameApplication, 0x88);

struct CGameApplication : CBaseGameApplication
{
    struct Unk88
    {
        int16_t unk0;
        int8_t unk2;
        int8_t unk3;
        int32_t unk4;
        int64_t unk8;
        int8_t unk10;
        int16_t unk12;
        CString unk18;
        CString unk38;
        int64_t unk58;
        int8_t unk60;
        int64_t unk68;
        CString unk70;
        CString unk90;
        int32_t unkB0;
        int32_t unkB4;
        int8_t unkB8;
        int32_t unkBC;
        int8_t unkC0;
    };

    Unk88 unk88;
    DynArray<uint32_t> stateIndexes;
    DynArray<IGameState*> states;
    int64_t unk20;
    IGameState* currState;
    IGameState* nextState;
    EGameStateStatus status;
    char* name;
    uint32_t result;
};
RED4EXT_ASSERT_SIZE(CGameApplication, 0x1A0);
RED4EXT_ASSERT_OFFSET(CGameApplication, currState, 0x178);
RED4EXT_ASSERT_OFFSET(CGameApplication, nextState, 0x180);
RED4EXT_ASSERT_OFFSET(CGameApplication, status, 0x188);
RED4EXT_ASSERT_OFFSET(CGameApplication, name, 0x190);
RED4EXT_ASSERT_OFFSET(CGameApplication, result, 0x198);
} // namespace RED4ext
