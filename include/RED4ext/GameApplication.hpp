#pragma once

#include <cstdint>

#include <RED4ext/Common.hpp>
#include <RED4ext/GameStates.hpp>

namespace RED4ext
{
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

    int8_t unk8[0x80];
};
RED4EXT_ASSERT_SIZE(CBaseGameApplication, 0x88);

struct CGameApplication : CBaseGameApplication
{
    int8_t unk88[0x178 - 0x88];
    IGameState* currState;
    IGameState* nextState;
    EGameState state;
    char* name;
    uint32_t result;
};
RED4EXT_ASSERT_SIZE(CGameApplication, 0x1A0);
RED4EXT_ASSERT_OFFSET(CGameApplication, currState, 0x178);
RED4EXT_ASSERT_OFFSET(CGameApplication, nextState, 0x180);
RED4EXT_ASSERT_OFFSET(CGameApplication, state, 0x188);
RED4EXT_ASSERT_OFFSET(CGameApplication, name, 0x190);
RED4EXT_ASSERT_OFFSET(CGameApplication, result, 0x198);
}
